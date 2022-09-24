#include "bits/stdc++.h"

using namespace std;

//define a linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//insert node at the end of the list
void insertNodeAtEnd(ListNode *&head, int data) {
    ListNode *newNode = new ListNode(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    ListNode *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

//insert node at the beginning of the list
void insertNodeAtBeginning(ListNode *&head, int data) {
    ListNode *newNode = new ListNode(data);
    newNode->next = head;
    head = newNode;
}

//insert at a given position
void insertNodeAtPosition(ListNode *&head, int data, int position) {
    ListNode *newNode = new ListNode(data);
    if (position == 0) {
        insertNodeAtBeginning(head, data);
        return;
    }
    ListNode *temp = head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

//delete the first node
void deleteFirstNode(ListNode *&head) {
    if (head == nullptr) {
        return;
    }
    ListNode *temp = head;
    head = head->next;
    delete temp;
}

//delete the last node
void deleteLastNode(ListNode *&head) {
    if (head == nullptr) {
        return;
    }
    ListNode *temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

//swap two nodes
void swapNodes(ListNode *&head, int position1, int position2) {
    if (position1 == position2) {
        return;
    }
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    for (int i = 0; i < position1 - 1; i++) {
        temp1 = temp1->next;
    }
    for (int i = 0; i < position2 - 1; i++) {
        temp2 = temp2->next;
    }
    ListNode *temp3 = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp3;
}


//print the list
void printList(ListNode *head) {
    ListNode *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

//get node at a given position
ListNode *getNodeAtPosition(ListNode *head, int position) {
    ListNode *temp = head;
    for (int i = 0; i < position; i++) {
        temp = temp->next;
    }
    return temp;
}

//get the middle node
ListNode *getMiddleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//get the length of the list
int getLengthOfList(ListNode *head) {
    int length = 0;
    ListNode *temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

//search for a node in the list
bool searchNode(ListNode *head, int data) {
    ListNode *temp = head;
    while (temp != nullptr) {
        if (temp->val == data) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//merge two sorted lists
ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode *cur=new ListNode(0);
    ListNode *temp=cur;
    while(l1 && l2) {
        if(l1->val < l2->val) {
            cur->next=l1;
            l1=l1->next;
        }
        else {
            cur->next=l2;
            l2=l2->next;
        }
        cur=cur->next;
    }
    if(l1) cur->next=l1;
    if(l2) cur->next=l2;
    return temp->next;
}

// sort the linked list using merge sort
void mergeSort(ListNode *&head) {
    if(head == nullptr || head->next == nullptr) {
        return;
    }
    ListNode *slow=head, *fast=head->next;
    while(fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *temp=slow->next;
    slow->next=nullptr;
    mergeSort(head);
    mergeSort(temp);
    head=merge(head, temp);
}

//reverse a linked list
void reverseList(ListNode *&head) {
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

//check if linked list is a palindrome
bool isPalindrome(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *secondHalf = slow->next;
    slow->next = nullptr;
    reverseList(secondHalf);
    ListNode *firstHalf = head;
    while (secondHalf != nullptr) {
        if (firstHalf->val != secondHalf->val) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}


//convert an array to a linked list
ListNode *convertArrayToList(int *array, int length) {
    ListNode *head = nullptr;
    for (int i = 0; i < length; i++) {
        insertNodeAtEnd(head, array[i]);
    }
    return head;
}

//convert a linked list to an array
int *convertListToArray(ListNode *head) {
    int *array = new int[getLengthOfList(head)];
    ListNode *temp = head;
    int i = 0;
    while (temp != nullptr) {
        array[i++] = temp->val;
        temp = temp->next;
    }
    return array;
}

//convert a linked list to a string
string convertListToString(ListNode *head) {
    string str = "";
    ListNode *temp = head;
    while (temp != nullptr) {
        str += to_string(temp->val);
        temp = temp->next;
    }
    return str;
}


//odd even linked list
ListNode *oddEvenList(ListNode *head) {
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenHead = even;
    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}



int main(int argc, char const *argv[])
{
    /* code */
    int array[] = {5,8,4,3,9,2,1,10};
    ListNode *head = convertArrayToList(array, 8);
    printList(head);
    
    mergeSort(head);
    
    printList(head);
    
    // ListNode *head = oddEvenList(head);  
    // printList(head);
    // cout << isPalindrome(head) << endl;
    // cout << convertListToString(head) << endl;
    

    return 0;
}
