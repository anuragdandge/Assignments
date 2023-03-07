#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *front, *rear;
void enqueue(int data)
{

    node *temp = new node();
    temp->data = data;
    temp->next = front;

    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        temp->next = front;
        rear = temp;
    }
}

void dequeue()
{

    node *temp = front;
    front = front->next;
    cout << "\n"
         << temp->data << " deleted.\n";
    rear->next = front;
    delete temp;
}
void Display()
{
    node *current = front;
    do
    {
        cout << current->data << " -> ";
        current = current->next;
    } while (current != front);
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    enqueue(90);
    dequeue();
    enqueue(70);
    Display();
}