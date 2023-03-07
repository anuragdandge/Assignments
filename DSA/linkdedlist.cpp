#include <iostream>
using namespace std;
// the Structure of the Node
// "struct" is heterogenous collection of data which store elements of different data type in it
struct Node
{
    int data;
    Node *next;
} *head;
void insert(int num)
{
    // To Create a Temporary Node and Allocate Memory to it
    Node *temp = new Node;

    // To Assign the Data to the Node->data part
    temp->data = num;

    // Setting temp->next pointer to the NULL
    temp->next = NULL;

    // This condition is used to check if the "Head" Pointer is NULL or not
    if (head == NULL)
    {
        // Here we are Assigning temporary node to the head
        // It Means there is no any node in our linked list
        // and we can directly assign temp node to head pointer
        head = temp;
    }
    else
    {
        // When we reached to the else block it means there is some nodes in the list

        // So, we'll first create a temporary Node called "current" and allocate memory to it
        Node *current = new Node;

        // assigning head pointer to the current node
        current = head;

        // Loop to iterate through linked list until we get last node of list
        while (current->next != NULL)
        {
            // bellow line is used to shift the position of current pointer to the next node
            current = current->next;
            // cout << " Form Insert " << current->data;
        }

        // when the loop terminates we will have the last node of the linked list to insert data
        // Once we get the last node, we will insert our temporary node to the next of current node
        current->next = temp;
    }

    // cout << " \nInserted [" << num << "] at End ";
}
void disp()
{
    // In this Display Function we traverse the whole linked list and print data of each node

    // So for traversing we'll need temporary pointer pointing to the head node
    Node *temp = new Node;

    // Assigning head pointer to the temporary node pointer
    temp = head;
    cout << endl;

    // loop to iterate through our linked list and printing the data of each node

    while (temp != NULL)
    // we check condition as "temp != NULL " means if temporary node is not NULL
    {
        // then we'll first print the data of the node
        cout << temp->data << " -> ";

        // then we have to shift to next node
        temp = temp->next;
    }
    cout << " NULL";
}

void insertAtHead(int num)
{
    // Creation of Temporary Node and allocating memory to it
    Node *temp = new Node;

    // Assigning data to the Temporary node
    temp->data = num;

    // setting
    temp->next = head;
    head = temp;

    cout << "\nInserted[" << num << "] at Head \n";
    disp();
}
void insertAtIndex(int num)
{
    Node *temp = new Node;
    temp->data = num;
    temp->next = NULL;

    int pos;
    cout << "\nEnter a Position (after position ) : ";
    cin >> pos;
    Node *current = new Node;
    current = head;

    for (int i = 0; i < pos - 1; i++)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
    cout << "\nInserted[" << num << "] at after " << pos << "rd position \n";
    disp();
}
void deleteEnd()
{
    Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    delete current->next;
    current->next = NULL;
    cout << "\n Tail  Deleted ";
    // delete tail;
}

void deleteHead()
{
    Node *temp = head;
    head = temp->next;
    cout << "\n head " << temp->data << " Deleted ";
    delete temp;
}

void deleteAtIndex()
{
    int pos;
    cout << "\n Enter Position (after Position) ";
    cin >> pos;
    Node *current = head;
    for(int i = 0 ; i < pos-1;i++){
        current = current->next;
    }
    Node *temp = current->next ;
    current->next = temp->next;
    cout << temp->data <<" deleted  ";
    delete temp;
    
}
int main()
{   
    insert(10);
    insert(20);
    insert(30);
    insert(70);
    insert(60);
    disp();
    deleteEnd();
    disp();
    deleteHead();
    disp();
    insertAtHead(50);
    insert(100);
    disp();
    deleteAtIndex();
    insertAtIndex(2);
    deleteEnd();
    disp();
}