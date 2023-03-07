#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
} *root;
void insertNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL)
    {
        root = newNode;
        cout << " Inserted " << data << " at root node ";
    }
    else
    {
        // Node *parent = NULL;
        Node *current = root;
        while (1)
        {
            if (data < current->data)
            {
                cout << data << " if smaller than " << current->data;
                return data;
            }
            else if (data > current->data)
            {
                cout << data << " if bigger than " << current->data;
                return data;
            }
        }
    }
}
int main()
{
    insertNode(10);
    insertNode(20);
    // insertNode(30);
}