#include <iostream>
using namespace std;
int size = 5;
int s[5];
int top = -1;
void Push(int num)
{
    if (top >= size - 1)
    {
        cout << "Cannot Insert " << num << ", stack Overflow !!!";
    }
    else
    {
        top++;
        s[top] = num;
    }
}
void Pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow !!! \n ";
    }
    else
    {
        cout << s[top] << " removed \n";
        top--;
    }
}
void Display()
{
    if (top > -1)
    {
        cout << "\n Stack Elements are : \n";
        for (int i = top; i > -1; i--)
        {
            cout << s[i] << "\n";
        }
    }
    else
    {
        cout << "stack underflow";
    }
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Pop();
    Pop();
    Pop();
    Pop();
    Display();
}