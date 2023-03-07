#include <iostream>
using namespace std;
class Node
{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinaryTree
{
  public:
    Node* root;

    BinaryTree()
    {
        this->root = NULL;
    }
    void insert(int data)
    {
        Node* newNode = new Node(data);

        if (this->root == NULL)
        {
            this->root = newNode;
            return;
        }

        Node* current = this->root;
        Node* parent = NULL;

        while (current != NULL)
        {
            parent = current;

            if (data < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }

        if (data < parent->data)
        {
            parent->left = newNode;
        }
        else
        {
            parent->right = newNode;
        }
    }

    void inOrderTraversal(Node* node)
    {
        if (node == NULL)
        {
            return;
        }

        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }
    void postOrderTraversal(Node* node)
    {
        if (node == NULL)
        {
            return;
        }

        inOrderTraversal(node->left);
        inOrderTraversal(node->right);
        cout << node->data << " ";
    }
    void preOrderTraversal(Node* node)
    {
        if (node == NULL)
        {
            return;
        }

        cout << node->data << " ";
        inOrderTraversal(node->left);
        inOrderTraversal(node->right);
    }
};

int main()
{
    BinaryTree bt;

    bt.insert(5);
    bt.insert(3);
    bt.insert(7);
    bt.insert(1);
    bt.insert(4);
    bt.insert(6);
    bt.insert(8);

    cout << "In-order traversal: ";
    bt.inOrderTraversal(bt.root);
    cout << endl;
    cout << "Pre-Order traversal: ";
    bt.preOrderTraversal(bt.root);
    cout << endl;
    cout << "Post-Order traversal: ";
    bt.postOrderTraversal(bt.root);
    cout << endl;

    return 0;
}
