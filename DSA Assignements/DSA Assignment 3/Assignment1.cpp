// Implement Stack using Array
#include <iostream>
using namespace std;
int arr[5], size = 5, top = -1;
void Push(int data)
{
    if (top >= size - 1)
    {
        cout << "\n Stack Overflow !!! " << data << " can not added ";
    }
    else
    {
        top++;
        arr[top] = data;
        cout << "\n"
             << data << " added \n";
    }
}
void Pop()
{
    if (top == -1)
    {
        cout << " Stack Underflow ";
    }
    else
    {
        cout << "\n"
             << arr[top] << " deleted \n";
        top--;
    }
}
void Disp()
{
    if (top == -1)
    {
        cout << " Stack Underflow ";
    }
    else
    {
        cout << "\nStack Elements are : \n";
        cout <<"\n[";
        for (int i = top; i > -1; i--)
        {
            cout << arr[i] << " ";
        }
        cout <<"]\n";

    }
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Pop();
    Disp();
    Push(40);
    Push(50);
    Push(60);
    Disp();
}