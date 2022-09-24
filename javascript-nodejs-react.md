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
- Event-driven architecture: Event-driven architecture is a software architecture pattern that focuses on the flow of data between software components.