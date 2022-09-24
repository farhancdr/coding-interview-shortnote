//Builder Pattern in JavaScript
//Builder Pattern is a creational design pattern that allows you to separate the construction of a complex object from its representation.
class Car {
    constructor() {
        this.doors = 0;
        this.state = 'brand new';
        this.color = 'silver';
    }
}

class CarBuilder {
    constructor() {
        this.car = new Car();
    }

    addDoors(doors) {
        this.car.doors = doors;
        return this;
    }

    paint(color) {
        this.car.color = color;
        return this;
    }

    result() {
        return this.car;
    }
}

const carBuilder = new CarBuilder();
const car = carBuilder.addDoors(4).paint('blue').result();
console.log(car); // Car { doors: 4, state: 'brand new', color: 'blue' }


//Factory Pattern in JavaScript
//Factory Pattern is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.
class Dog {
    constructor() {
        this.bark = function() {
            return 'Woof!';
        }
    }
}

class Cat {
    constructor() {
        this.meow = function() {
            return 'Meow!';
        }
    }
}

class AnimalFactory {
    createAnimal(type) {
        switch (type) {
            case 'dog':
                return new Dog();
            case 'cat':
                return new Cat();
            default:
                return null;
        }
    }
}

const animalFactory = new AnimalFactory();
const dog = animalFactory.createAnimal('dog');
const cat = animalFactory.createAnimal('cat');
console.log(dog.bark()); // Woof!
console.log(cat.meow()); // Meow!


//Prototype Pattern in JavaScript
//Prototype Pattern is a creational design pattern that allows cloning objects, even complex ones, without coupling to their specific classes.
class TeslaModelS {
    constructor() {
        this.numWheels = 4;
    }

    price() {
        return 'Price is $70,000';
    }
}

class TeslaModelX {
    constructor() {
        this.numWheels = 4;
    }

    price() {
        return 'Price is $80,000';
    }
}

class TeslaModel3 {
    constructor() {
        this.numWheels = 4;
    }

    price() {
        return 'Price is $35,000';
    }
}

class TeslaFactory {
    create(type) {
        switch (type) {
            case 'S':
                return new TeslaModelS();
            case 'X':
                return new TeslaModelX();
            case '3':
                return new TeslaModel3();
        }
    }
}

const teslaFactory = new TeslaFactory();
const modelS = teslaFactory.create('S');
const modelX = teslaFactory.create('X');
const model3 = teslaFactory.create('3');
console.log(modelS.price()); // Price is $70,000
console.log(modelX.price()); // Price is $80,000
console.log(model3.price()); // Price is $35,000


//Singleton Pattern in JavaScript
//Singleton Pattern is a creational design pattern that lets you ensure that a class has only one instance, while providing a global access point to this instance.
class Tesla {
    constructor() {
        if (typeof Tesla.instance === 'object') {
            return Tesla.instance;
        }

        this._price = 35000;
        Tesla.instance = this;
        return this;
    }

    getPrice() {
        return this._price;
    }

    setPrice(price) {
        this._price = price;
    }
}

const tesla = new Tesla();
tesla.setPrice(40000);
console.log(tesla.getPrice()); // 40000

const tesla2 = new Tesla();
console.log(tesla2.getPrice()); // 40000


//Adapter Pattern in JavaScript
//Adapter Pattern is a structural design pattern that allows objects with incompatible interfaces to collaborate.
class OldCalculator {
    constructor() {
        this.operations = function(term1, term2, operation) {
            switch (operation) {
                case 'add':
                    return term1 + term2;
                case 'sub':
                    return term1 - term2;
                default:
                    return NaN;
            }
        }
    }
}

class NewCalculator {
    constructor() {
        this.add = function(term1, term2) {
            return term1 + term2;
        }

        this.sub = function(term1, term2) {
            return term1 - term2;
        }
    }
}

class CalcAdapter {
    constructor() {
        const newCalc = new NewCalculator();

        this.operations = function(term1, term2, operation) {
            switch (operation) {
                case 'add':
                    return newCalc.add(term1, term2);
                case 'sub':
                    return newCalc.sub(term1, term2);
                default:
                    return NaN;
            }
        }
    }
}

const oldCalc = new OldCalculator();
console.log(oldCalc.operations(10, 5, 'add')); // 15

const newCalc = new NewCalculator();
console.log(newCalc.add(10, 5)); // 15

const adaptedCalc = new CalcAdapter();
console.log(adaptedCalc.operations(10, 5, 'add')); // 15


//Decorator Pattern in JavaScript
//Decorator Pattern is a structural design pattern that lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors.
class Server {
    constructor(ip, port) {
        this.ip = ip;
        this.port = port;
    }

    get url() {
        return `https://${this.ip}:${this.port}`;
    }
}

function aws(server) {
    server.isAWS = true;
    server.awsInfo = function() {
        return server.url;
    }
    return server;
}

function azure(server) {
    server.isAzure = true;
    server.port += 500;
    return server;
}

const s1 = aws(new Server('10.10.10.10', 8080));
console.log(s1.isAWS); // true
console.log(s1.awsInfo()); // https://10.10.10.10:8080

const s2 = azure(new Server('10.20.20.20', 1500));
console.log(s2.isAzure); // true
console.log(s2.url); // https://10.20.20.20:1500


//Facade Pattern in JavaScript
//Facade Pattern is a structural design pattern that provides a simplified interface to a library, a framework, or any other complex set of classes.
class Complaints {
    constructor() {
        this.complaints = [];
    }

    reply(complaint) {}

    add(complaint) {
        this.complaints.push(complaint);
        return this.reply(complaint);
    }
}

class ProductComplaints extends Complaints {
    reply({id, customer, details}) {
        return `Product: ${id}: ${customer} (${details})`;
    }
}

class ServiceComplaints extends Complaints {
    reply({id, customer, details}) {
        return `Service: ${id}: ${customer} (${details})`;
    }
}

class ComplaintRegistry {
    register(customer, type, details) {
        const id = Date.now();
        let complaint;

        if (type === 'service') {
            complaint = new ServiceComplaints();
        } else {
            complaint = new ProductComplaints();
        }

        return complaint.add({id, customer, details});
    }
}

const registry = new ComplaintRegistry();

console.log(registry.register('Vladilen', 'service', 'недоступен')); // Service: 1610612736000: Vladilen (недоступен)
console.log(registry.register('Elena', 'product', 'вылазит ошибка')); // Product: 1610612736001: Elena (вылазит ошибка)


//Proxy Pattern in JavaScript
//Proxy Pattern is a structural design pattern that lets you provide a substitute or placeholder for another object. A proxy controls access to the original object, allowing you to perform something either before or after the request gets through to the original object.
class CarAccess {
    open() {
        console.log('Opening car door');
    }

    close() {
        console.log('Closing the car door');
    }
}

class SecuritySystem {
    constructor(door) {
        this.door = door;
    }

    open(password) {
        if (this.authenticate(password)) {
            this.door.open();
        } else {
            console.log('Access denied!');
        }
    }

    authenticate(password) {
        return password === 'Ilon';
    }

    close() {
        this.door.close();
    }
}

const door = new SecuritySystem(new CarAccess());

door.open('Jack'); //Access denied!
door.open('Ilon'); //Opening car door
door.close(); //Closing the car door


//Flyweight Pattern in JavaScript
//Flyweight Pattern is a structural design pattern that lets you fit more objects into the available amount of RAM by sharing common parts of state between multiple objects instead of keeping all of the data in each object.
class Car {
    constructor(model, price) {
        this.model = model;
        this.price = price;
    }
}

class CarFactory {
    constructor() {
        this.cars = [];
    }

    create(model, price) {
        const candidate = this.getCar(model);
        if (candidate) {
            return candidate;
        }

        const newCar = new Car(model, price);
        this.cars.push(newCar);
        return newCar;
    }

    getCar(model) {
        return this.cars.find(car => car.model === model);
    }
}

const factory = new CarFactory();

const bmwX6 = factory.create('bmw', 10000);
const audi = factory.create('audi', 12000);
const bmwX3 = factory.create('bmw', 8000);

console.log(bmwX3 === bmwX6); //true


//Composite Pattern in JavaScript
//Composite Pattern is a structural design pattern that lets you compose objects into tree structures and then work with these structures as if they were individual objects.
class Equipment {
    getPrice() {
        return this.price || 0;
    }

    getName() {
        return this.name;
    }

    setName(name) {
        this.name = name;
    }
}

class Engine extends Equipment {
    constructor() {
        super();
        this.setName('Engine');
        this.price = 800;
    }
}

class Body extends Equipment {
    constructor() {
        super();
        this.setName('Body');
        this.price = 3000;
    }
}

class Tools extends Equipment {
    constructor() {
        super();
        this.setName('Tools');
        this.price = 4000;
    }
}

class Composite extends Equipment {
    constructor() {
        super();
        this.equipments = [];
    }

    add(equipment) {
        this.equipments.push(equipment);
    }

    getPrice() {
        return this.equipments
            .map(equipment => equipment.getPrice())
            .reduce((a, b) => a + b);
    }
}

class Car extends Composite {
    constructor() {
        super();
        this.setName('Audi');
    }
}

const myCar = new Car();

myCar.add(new Engine());
myCar.add(new Body());
myCar.add(new Tools());

console.log(myCar.getPrice()); //7400
console.log(myCar.getName()); //Audi
