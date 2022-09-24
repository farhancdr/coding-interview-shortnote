class Stack{
    constructor(){
        this.items = [];
    }
    push(element){
        this.items.push(element);
    }
    pop(){
        return this.items.length > 0 ? this.items.pop() : null;
    }
    
    isEmpty(){
        return this.items.length === 0;
    }

    peek(){
        return this.items[this.items.length - 1];
    }

    size(){
        return this.items.length;
    }

    clear(){
        this.items = [];
    }
}

class Queue{
    constructor(){
        this.items = [];
    }

    push(element){
        this.items.push(element);
    }

    pop(){
        return this.items.length > 0 ? this.items.shift() : null;
    }

    isEmpty(){
        return this.items.length === 0;
    }   

    peek(){
        return this.items[0];
    }

    size(){
        return this.items.length;
    }

    clear(){
        this.items = [];
    }
}


const stack = new Stack();
stack.push(5);
stack.push(8);
console.log(stack.pop());