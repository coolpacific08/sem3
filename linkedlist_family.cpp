#include <iostream>
#include <string>
#include "class_family.h"
using namespace std;


// Function to specify size of the family and to add input of name and age of each member.
Family *takeinputand_appendatlast()
{

    int n;
    cout << "ENTER THE SIZE OF THE FAMILY : ";
    cin >> n;
    cout << endl;

    Family *head = NULL;
    Family *nxt = NULL;
    Family *previous = NULL;

   for(int i=1;i<=n;i++)
    {
        string n;
        cout << "enter " << i << "Name of the family member : ";
        cin >> n;

        int age;
        cout << "Enter " << i << "Age of the family member : ";
        cin >> age;

        Family *newmem = new Family(n, age);

        if (head == NULL)
        {
            head = newmem;
            nxt = newmem;
            previous = newmem;
        }
        else
        {
            previous->next = newmem;
            newmem->prev = previous;
            nxt = newmem;
            previous = nxt;
        }
    }
    return head;
}


// Prints the name and age of every member of the list.
void printdoubleLL(Family *head)
{
    Family *temp = head;
    cout << endl << "FAMILY TREE--" << endl;
    while (temp != NULL)
    {
        cout << "Name of member : " << temp->name << " " << "Age of member : " << temp->age << endl;
        temp = temp->next;
    }
}


int main()
{

    // function that takes input and appends it to the end of the linked list.
    Family *head = takeinputand_appendatlast();
    printdoubleLL(head);
}