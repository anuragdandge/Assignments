// 5. Write a C++ program implementing stack and it’s operations using template class.
#include <iostream>
using namespace std;
template <class T>
class Stack
{
    T arr[20], max, top = -1;

public:
    Stack(T size)
    {
        max = size;
    }
    void Push(T element)
    {
        if (top >= max - 1)
        {
            cout << " Stack Overflow !!! \n";
            cout << " Cannot Push " << element << " into stack \n";
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }
    void Pop()
    {
        if (top < 0)
        {
            cout << " Stack Underflow !!! \n";
        }
        else
        {
            cout << arr[top] << " Popped \n ";
            top--;
        }
    }
    void Display()
    {
        if (top > -1)
        {

            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " -> ";
            }
            cout << endl;
        }
        else{
            cout << " Stack Underflow !!! \n ";
        }
    }
};
int main()
{
    Stack<int> i(8);
    i.Push(10);
    i.Push(20);
    i.Push(30);
    i.Push(40);
    i.Push(50);
    i.Push(60);
    i.Push(70);
    i.Pop();
    i.Pop();
    i.Display();

    Stack<char> c(8);
    c.Push('a');
    c.Push('b');
    c.Push('c');
    c.Push('d');
    c.Push('e');
    c.Push('f');
    c.Push('g');
    c.Pop();
    c.Pop();
    c.Display();
}

// output : 

// 70 Popped
//  60 Popped
//  10 -> 20 -> 30 -> 40 -> 50 ->
// g Popped
//  f Popped
//  a -> b -> c -> d -> e ->