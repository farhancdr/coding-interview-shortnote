function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

//insert node at the end of the list
const insertNodeAtEnd = (head, val) => {
  if (head === null) {
    return new ListNode(val);
  }
  let current = head;
  while (current.next !== null) {
    current = current.next;
  }
  current.next = new ListNode(val);
  return head;
}

//insert node at the beginning of the list
const insertNodeAtBeginning = (head, val) => {
  let newNode = new ListNode(val);
  newNode.next = head;
  return newNode;
}

//insert at a given position
const insertNodeAtPosition = (head, val, position) => {
  if (position === 0) {
    return insertNodeAtBeginning(head, val);
  }
  let current = head;
  let count = 0;
  while (count < position - 1) {
    current = current.next;
    count++;
  }
  let newNode = new ListNode(val);
  newNode.next = current.next;
  current.next = newNode;
  return head;
}

//delete the first node
const deleteFirstNode = (head) => {
  if (head === null) {
    return null;
  }
  return head.next;
}

//delete the last node
const deleteLastNode = (head) => {
  if (head === null) {
    return null;
  }
  if (head.next === null) {
    return null;
  }
  let current = head;
  while (current.next.next !== null) {
    current = current.next;
  }
  current.next = null;
  return head;
}

//delete node at a given position
const deleteNodeAtPosition = (head, position) => {
  if (position === 0) {
    return deleteFirstNode(head);
  }
  let current = head;
  let count = 0;
  while (count < position - 1) {
    current = current.next;
    count++;
  }
  current.next = current.next.next;
  return head;
}

//reverse the linked list
const reverseLinkedList = (head) => {
  if (head === null) {
    return null;
  }
  let current = head;
  let previous = null;
  while (current !== null) {
    let next = current.next;
    current.next = previous;
    previous = current;
    current = next;
  }
  return previous;
}

//print the linked list
const printLinkedList = (head) => {
  let current = head;
  while (current !== null) {
    console.log(current.val);
    current = current.next;
  }
}

//swap two nodes
const swapNodes = (head, x, y) => {
  if (x === y) {
    return head;
  }
  let current = head;
  let previousX = null;
  let previousY = null;
  while (current !== null) {
    if (current.val === x) {
      previousX = current;
    }
    if (current.val === y) {
      previousY = current;
    }
    current = current.next;
  }
  if (previousX === null || previousY === null) {
    return head;
  }
  let temp = previousX.val;
  previousX.val = previousY.val;
  previousY.val = temp;
  return head;
}

//get node at a given position
const getNodeAtPosition = (head, position) => {
  let current = head;
  let count = 0;
  while (count < position) {
    current = current.next;
    count++;
  }
  return current.val;
}

//get the middle node
const getMiddleNode = (head) => {
  let slow = head;
  let fast = head;
  while (fast !== null && fast.next !== null) {
    slow = slow.next;
    fast = fast.next.next;
  }
  return slow.val;
}

//get the length of the linked list
const getLength = (head) => {
  let current = head;
  let count = 0;
  while (current !== null) {
    count++;
    current = current.next;
  }
  return count;
}

//binary search in a linked list
const binarySearch = (head, key) => {
  let start = head;
  let end = head;
  while (end.next !== null) {
    end = end.next;
  }
  while (start !== end) {
    let mid = getMiddleNode(start);
    if (mid === key) {
      return true;
    }
    if (mid < key) {
      start = mid.next;
    } else {
      end = mid;
    }
  }
  return false;
}

//linear search in a linked list
const linearSearch = (head, key) => {
  let current = head;
  while (current !== null) {
    if (current.val === key) {
      return true;
    }
    current = current.next;
  }
  return false;
}

//merge two sorted linked lists
const mergeTwoSortedLinkedLists = (head1, head2) => {
  let current1 = head1;
  let current2 = head2;
  let head = null;
  while (current1 !== null && current2 !== null) {
    if (current1.val < current2.val) {
      head = insertNodeAtEnd(head, current1.val);
      current1 = current1.next;
    } else {
      head = insertNodeAtEnd(head, current2.val);
      current2 = current2.next;
    }
  }
  while (current1 !== null) {
    head = insertNodeAtEnd(head, current1.val);
    current1 = current1.next;
  }
  while (current2 !== null) {
    head = insertNodeAtEnd(head, current2.val);
    current2 = current2.next;
  }
  return head;
}

//merge sort
const mergeSort = (head) => {
  if (head === null || head.next === null) {
    return head;
  }
  let middle = getMiddleNode(head);
  let nextToMiddle = middle.next;
  middle.next = null;
  let left = mergeSort(head);
  let right = mergeSort(nextToMiddle);
  return mergeTwoSortedLinkedLists(left, right);
}

//remove duplicates from a sorted linked list
const removeDuplicatesFromSortedLinkedList = (head) => {
  let current = head;
  while (current !== null && current.next !== null) {
    if (current.val === current.next.val) {
      current.next = current.next.next;
    } else {
      current = current.next;
    }
  }
  return head;
}

//remove duplicates from an unsorted linked list
const removeDuplicatesFromUnsortedLinkedList = (head) => {
  let current = head;
  while (current !== null) {
    let runner = current;
    while (runner.next !== null) {
      if (runner.next.val === current.val) {
        runner.next = runner.next.next;
      } else {
        runner = runner.next;
      }
    }
    current = current.next;
  }
  return head;
}

//check if linked list is a palindrome
const isPalindrome = (head) => {
  let current = head;
  let stack = [];
  while (current !== null) {
    stack.push(current.val);
    current = current.next;
  }
  current = head;
  while (current !== null) {
    if (current.val !== stack.pop()) {
      return false;
    }
    current = current.next;
  }
  return true;
}

//convert a linked list to an array
const linkedListToArray = (head) => {
  let current = head;
  let arr = [];
  while (current !== null) {
    arr.push(current.val);
    current = current.next;
  }
  return arr;
}

//convert an array to a linked list
const arrayToLinkedList = (arr) => {
  let head = null;
  for (let i = 0; i < arr.length; i++) {
    head = insertNodeAtEnd(head, arr[i]);
  }
  return head;
};

// stack implementation using linked list
class Stack {
  constructor() {
    this.head = null;
  }
  push(val) {
    this.head = insertNodeAtBeginning(this.head, val);
  }
  pop() {
    if (this.head === null) {
      return null;
    }
    let temp = this.head.val;
    this.head = this.head.next;
    return temp;
  }
  peek() {
    if (this.head === null) {
      return null;
    }
    return this.head.val;
  }
  isEmpty() {
    return this.head === null;
  }
}

// queue implementation using linked list
class Queue {
  constructor() {
    this.head = null;
    this.tail = null;
  }
  enqueue(val) {
    if (this.head === null) {
      this.head = new Node(val);
      this.tail = this.head;
    } else {
      this.tail.next = new Node(val);
      this.tail = this.tail.next;
    }
  }
  dequeue() {
    if (this.head === null) {
      return null;
    }
    let temp = this.head.val;
    this.head = this.head.next;
    return temp;
  }
  peek() {
    if (this.head === null) {
      return null;
    }
    return this.head.val;
  }
  isEmpty() {
    return this.head === null;
  }
}

function main(){
  // create a linked list from array and print it
  let arr = [1, 2, 3, 4, 5];
  let head = arrayToLinkedList(arr);
  // reverse a linked list
  head = reverseLinkedList(head);
  printLinkedList(head);
}

main();