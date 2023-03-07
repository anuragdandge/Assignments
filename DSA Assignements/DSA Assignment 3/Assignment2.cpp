#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*top;
void push(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = top;
    top = temp;
}

int pop()
{
    if (top == nullptr)
    {
        cout << "Error: Stack is empty" << endl;
        exit(0);
    }
    int poppedData = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return poppedData;
}
void disp()
{
    if (top == nullptr)
    {
        cout << "Error: Stack is empty" << endl;
    }
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    push(1);
    push(2);
    push(3);
    disp();
    cout <<"Popped Element is "<< pop() << endl;
    cout <<"Popped Element is "<< pop() << endl;
    cout <<"Popped Element is "<< pop() << endl;
    disp();
    return 0;
}
