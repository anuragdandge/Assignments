#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *top;
void Push(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = top;
    top = temp;
}
void Pop()
{
    Node *temp = top;
    cout << "\n"
         << temp->data << " Popped !\n";
    top = top->next;
    delete temp;
}
void Display()
{
    Node *Current = top;
    while (Current != NULL)
    {
        cout << Current->data << " -> ";
        Current = Current->next;
    }
    cout << "NULL";
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Display();
    Pop();
    Display();
}