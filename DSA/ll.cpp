#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *head, *tail;
void print()
{
    cout << "\n";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL ";
}
void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *current = new Node();
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
        tail = temp;
    }
}
void insertAtHead(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void insertAtIndex(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    int pos;
    cout << "\n Enter Position (after position ) : ";
    cin >> pos;
    Node *current = new Node();
    current = head;
    for (int i = 0; i < pos - 1; i++)
    {
        current = current->next;
    }
    temp->next = current->next;
    current->next = temp;
    print();
}
void deleteNode()
{
    Node *temp = new Node();
    Node *current = head;
    while (current->next != tail)
    {
       current = current->next;
    }
    // tail = current ; 
    // delete current->next;
    cout << " Current = " << current->data;
    cout << "\n Tail  = " << tail->data;
    tail = current;
    temp = current;
    cout << "\n Tail  = " << tail->data;
    cout << "\n toDelate = " << temp->data;
    delete temp;
    
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    // print();
    insertAtHead(50);
    // print();
    // insertAtIndex(2);
    // cout << "\n Tail = " << tail->data;
    deleteNode();
    print();
}