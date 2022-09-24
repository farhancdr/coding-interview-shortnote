// OOP implementation in JavaScript
// Inheritance
// class Animal {
//   constructor(name) {
//     this.name = name;
//   }
//   eat() {
//     console.log(`${this.name} eats`);
//   }
// }

// class Dog extends Animal {
//   constructor(name) {
//     super(name);
//   }
//   bark() {
//     console.log(`${this.name} barks`);
//   }
// }

// const dog = new Dog("Rex");
// dog.eat();
// dog.bark();

// Encapsulation
class Car {
  constructor(name) {
    this.name = name;
    this._price = 1000;
  }
  get price() {
    return this._price;
  }
  set price(value) {
    if (value < 0) throw new Error("Invalid price");
    this._price = value;
  }
}

const car = new Car("BMW");
car.price = 2000;
console.log(car.price);

