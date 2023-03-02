6. Write a C++ program implementing linked list some required operations on it using class template
#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
    T data;
    Node *next;
} Node<T> *head;
template <class T>
class LL
{

public:
    LL() { head = NULL; }
    void insertAtTail(T val)
    {

        if (head == NULL)
        {
            insertAtHead(head, val);
            return;
        }

        Node *n = new Node(val);
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = n;
        n->next = head;
    }

    void Display(Node *&head)
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            // system(" 0A");
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void Delete(Node *&head, int pos)
    {
        if (pos == 1)
        {
            DeleteAtHead(head);
            return;
        }

        Node *temp = head;
        int count = 1;
        while (count != pos - 1)
        {
            temp = temp->next;
            count++;
        }

        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};

int main()
{
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    Display();
}




