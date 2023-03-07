#include <iostream>
using namespace std;
int q[5];
int m = 5, front = -1, rear = -1;
void Enqueue(int data)
{
    if (rear == m - 1)
    {
        cout << "\n Cannot Insert " << data << " Queue is Overflow.";
    }
    else
    {
        rear++;
        q[rear] = data;
        cout << "\nInserted " << data;
    }
}
void Dequeue()
{
    if (rear == -1 || front > rear)
    {
        cout << "\nQueue is Empty .";
    }
    else
    {
        front++;
        cout << "\n"
             << q[front] << " Deleted !!!. \t Value of Front = " << front;
    }
}
void display()
{
    if (rear == -1 || front > rear)
    {
        cout << "\nQueue is Empty .";
    }
    else
    {
        cout << "\nItems in the Queue :- \n";
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
    }
}
int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    display();
}
