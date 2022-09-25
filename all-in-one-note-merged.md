# Database
## sharding vs partitioning
- Sharding is a horizontal partitioning of data, while partitioning is a vertical partitioning of data.
- sharding implies the data is spread across multiple computers while partitioning does not. 
- Partitioning is about grouping subsets of data within a single database instance.

## Indexing
- improves the speed of data retrieval operations.
- Indexes are smaller referential tables that holds row references against the indexed value
- 
## Master-slave replication
- Master-slave replication is a method of replicating data from a master database to one or more slave databases.
- The master database is the source of truth, and the slave databases are read-only copies of the master.

## Super-key, Candidate-key, Primary-key, Foreign-key, Composite-key, Alternate-key
- Super-key: Super subset of of candidate key
- Candidate-key: All the attributes that can uniquely identify
- Primary-key: Candidate-key that is chosen by the designer
- Unique-key: Candidate-keys that are not primary-keys
- Alternate-key: A key that is not the primary key but can be used to uniquely identify a record
- composite-key: A key that is made up of more than one attribute

## ACID properties
- Atomicity: All or nothing. Either all the operations in a transaction are completed or none of them are.
- Consistency: Database is always in a valid state. No transaction can break the rules of the database.
- Isolation: Transactions are isolated from each other. The effects of any transaction are not visible to any other transaction until that transaction is committed.
- Durability: Once a transaction is committed, it will remain so, even in the event of power loss, crashes, or errors.

## Normalization
- Normalization is a process used to organize a database into tables and columns.
### 1st normal form
- The information is stored in a relational table with each column containing atomic values. There should be no repeating groups of columns.
### 2nd normal form
- The table is in first normal form and all the columns depend on the table’s primary key.
### 3rd normal form
- The table is in second normal form and all of its columns are not transitively dependent on the primary key.
### Boyce-Codd normal form
- The table is in 3rd normal form and all of its columns are functionally dependent on the primary key.


<!-- =========================================================================================================== -->
# Javascript
## Common terms
- Primitive data types: string, number, boolean, null, undefined, symbol
- Non-primitive data types: object, array, function
- Hoisting: JavaScript's default behavior of moving all declarations to the top of the current scope.
- Closure: A closure is the combination of a function and the lexical environment within which that function was declared.
- Scope: The current context of execution, which determines the accessibility of variables. There are two types of scope: global and local.
- IIFE: Immediately Invoked Function Expression. A common pattern for creating local scopes.
- call-stack: A stack with a LIFO (Last In, First Out) structure.
- Callback: A callback is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.
- Execution context: contains the code that's currently running, and everything that aids in its execution

## Call/Apply/Bind
- Call: The call() method calls a function with a given this value and arguments provided individually.
- Apply: The apply() method calls a function with a given this value, and arguments provided as an array (or an array-like object).
- Bind: The bind() method creates a new function that, when called, has its this keyword set to the provided value.


## Event loop
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.


## Promise/Async/Await/Eventing
- Promise: Promises are used to handle asynchronous operations in JavaScript.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.
- Event capturing: The event propagation from the outer element to inner elements.
- Event propagation: The process of an event being triggered on an element, and then propagating up through its ancestors in the DOM tree.
- Event propagation order: Capturing phase, target phase, bubbling phase.

# React
## Virtual DOM
- “virtual” representation of the actual DOM. It is nothing but an object created to replicate the actual DOM.
- Virtual DOM is a programming concept where an ideal, or “virtual”, representation of a UI is kept in memory and synced with the “real” DOM by a library such as ReactDOM.
- React creates an in-memory data-structure cache, computes the resulting differences, and then updates the browser's displayed DOM efficiently.
- virtual DOM is much faster, because nothing gets drawn onscreen.
- virtual DOM is cheap to create because it doesn’t write to the screen

## React hooks
- useState: The useState hook lets you add state to function components.
- useEffect: The useEffect hook lets you perform side effects in function components.
- useContext: The useContext hook lets you use context in function components.
- useReducer: The useReducer hook lets you use a reducer in function components.
- useCallback: The useCallback hook lets you use a callback in function components.
- useMemo: The useMemo hook lets you use a memoized value in function components.
- useRef: The useRef hook lets you use a ref in function components.
- useImperativeHandle: The useImperativeHandle hook lets you use imperative handle in function components.
- useLayoutEffect: The useLayoutEffect hook lets you use layout effects in function components.

## React Events
- SyntheticEvent: React wraps the browser’s native event so that the behavior across different browsers is consistent.
- Event pooling: React will reuse the same SyntheticEvent object for performance reasons.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.

# Node.js

## what/why
- Node.js is an open-source, cross-platform, JavaScript runtime environment that executes JavaScript code outside of a browser.
- It is generally fast, non-blocking, and uses Google’s V8 JavaScript engine to execute code, everything is asynchronous, yeilds great concurrency.

## How works
- Node.js retrieves the incoming requests and adds those to the Event Queue
- requests are then passed one-by-one through the Event Loop. It checks if the requests are simple enough not to require any external resources
- The Event Loop processes simple requests (non-blocking operations), such as I/O Polling, and returns the responses to the corresponding clients
- single thread from the Thread Pool is assigned to a single complex request. This thread is responsible for completing a particular blocking request by accessing external resources, such as computation, database, file system, etc.
- Once the task is carried out completely, the response is sent to the Event Loop that sends that response back to the client.
- The Event Loop checks the Event Queue and if there is an event, it will be added to the Call Stack
- The Call Stack executes the event and removes it from the Call Stack
- The Event Loop checks the Event Queue again and if there is an event, it will be added to the Call Stack

## Common terms
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.
- Event-driven programming: Event-driven programming is a programming paradigm in which the flow of the program is determined by events such as user actions (mouse clicks, key presses), sensor outputs, or messages from other programs or threads.
- Event-driven architecture: Event-driven architecture is a software architecture pattern that focuses on the flow of data between software components.# Computer Network

## PORT
- PORT: A port is a communication endpoint. It is a logical construct that identifies a specific process or a type of network service.
 
## OSI model
- Application layer: end devices
- Presentation layer: data format. encryption and compression
- Session layer: session management
- Transport layer: end-to-end communication. TCP and UDP
- Network layer: forwarding packets and routing.
- Data link layer: error detection and correction. 
- Physical layer: physical transmission


## TCP vs UDP
- TCP is a connection-oriented protocol, while UDP is a connectionless protocol.
- TCP provides reliable, ordered, and error-checked delivery of a stream of octets (bytes) between applications running on hosts communicating via an IP network.
- UDP provides a connectionless datagram service that emphasizes reduced latency over reliability.
- Ex: TCP is used for HTTP, FTP, SMTP, and UDP is used for DNS, DHCP, and TFTP.

## HTTP vs HTTPS
- HTTP is a protocol that is used to transfer data over the web. HTTPS is HTTP over TLS/SSL.

## OSI vs TCP/IP
- OSI is a reference model for networking, while TCP/IP is a set of protocols that implement the model.

## Handshake
- A handshake is a sequence of messages exchanged between two or more computing devices, or between a computer and a user, in order to set up a direct connection between the devices and establish the parameters of the connection.


<!-- =========================================================================================================== -->
# OOP
## OOP principles
- Encapsulation: The bundling of data with the methods that operate on that data, or the restricting of direct access to some of an object's components.
- Abstraction: The process of hiding the implementation details from the user, only the functionality will be provided to the user.
- Inheritance: The transfer of the characteristics of a class to other classes that are derived from it.
- Polymorphism: The provision of a single interface to entities of different types or the use of a single symbol to represent multiple different types.

## SOLID
- Single responsibility principle: A class should have one and only one reason to change, meaning that a class should have only one job.
- Open-closed principle: Objects or entities should be open for extension, but closed for modification.
- Liskov substitution principle: Objects in a program should be replaceable with instances of their subtypes without altering the correctness of that program.
- Interface segregation principle:  keeping things separated, and the Interface Segregation Principle is about separating the interfaces.
- Dependency inversion principle:  classes should depend upon interfaces or abstract classes instead of concrete classes and functions.

## Design patterns
### Creational patterns
- Abstract factory: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.
- Builder: Separates object construction from its representation.
- Factory method: Creates an instance of several derived classes.
- Prototype: A fully initialized instance to be copied or cloned.
- Singleton: A class of which only a single instance can exist.

### Structural patterns
- Adapter: Match interfaces of different classes.
- Bridge: Separates an object’s interface from its implementation.
- Composite: A tree structure of simple and composite objects.
- Decorator: Add responsibilities to objects dynamically.
- Facade: A single class that represents an entire subsystem.
- Flyweight: A fine-grained instance used for efficient sharing.
- Proxy: An object representing another object.
  
### Behavioral patterns
- Chain of responsibility: A way of passing a request between a chain of objects.
- Command: Encapsulate a command request as an object.
- Interpreter: A way to include language elements in a program.
- Iterator: Sequentially access the elements of a collection.


<!-- =========================================================================================================== -->
# Operating System
## Process
- A process is an instance of a computer program that is being executed.

## Thread
- A thread is a unit of CPU utilization. It is the smallest sequence of programmed instructions that can be managed independently by a scheduler, which is typically a part of the operating system.

## Context switching
- Context switching is the process of saving the state of a process or thread that is being preempted so that it can be restored and execution can resume from the exact same point at a later time.

## Deadlock
- A deadlock occurs when two or more processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process.

## Concurrence vs Parallelism
- Concurrency is the composition of independently executing processes, while parallelism is the simultaneous execution of (possibly related) computations.
- Concurrency is about dealing with lots of things at once. Parallelism is about doing lots of things at once.

