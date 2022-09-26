//  ANSWER 1 :

#include <iostream>
using namespace std;
  
//  CREATING CLASS NODE
class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
  
/* Function to insert a node at the beginning 
of a Circular linked list */
void push(Node **head_ref, int data) 
{ 
    Node *ptr1 = new Node();
    Node *temp = *head_ref; 
    ptr1->data = data; 
    ptr1->next = *head_ref; 
  
    /* If linked list is not NULL then set the next of last node */
    if (*head_ref != NULL) 
    { 
        while (temp->next != *head_ref) //This condition establishes that the traversing element(temp) has reached the first element**********
            temp = temp->next; 
        temp->next = ptr1; 
    } 
    else
        ptr1->next = ptr1; /*For the first node */
  
    *head_ref = ptr1; 
} 
  
/* Function to print nodes in the Circular linked list */
void printList(Node *head) 
{ 
    Node *temp = head; 
    if (head != NULL) 
    { 
        do
        { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } 
        while (temp != head); 
    } 
} 
  
int main() 
{ 
    /* Initialize lists as empty */
    Node *head = NULL; 
  
    /* Created linked list will be 11->2->56->12 */
    push(&head, 12); 
    push(&head, 56); 
    push(&head, 2); 
    push(&head, 11); 
  
    cout << "Contents of Circular Linked List\n "; 
    printList(head); 
  
    return 0; 
} 

/*
With respect to above example of circular linked list.
Line 24 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.
*/

//   ANSWER 2:

/*
  Practical applications of circular linked list are :

1)  Circular Linked Lists can be used to manage the computing resources of the computer.

2)  Data structures such as stacks and queues are implemented with the help of the circular linked lists.

3)  Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.

4)  It is also used in computer networking for token scheduling.

5)  Circular linked list is also used in computer networking for token scheduling.

6)  Circular linked list is also used in audio and video streaming,for ex. when one copmlete audio list finishes playing in music player then
    it again starts playing from start.
    */