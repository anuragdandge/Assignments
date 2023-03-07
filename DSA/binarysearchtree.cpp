#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left_child, *right_child;
} *root;
// struct Node *newNode(int data)
// {
//     Node *temp = new Node();
//     // struct Node *parent;
//     // struct Node *current;
//     temp->data = data;
//     temp->left_child = NULL;
//     temp->right_child = NULL;
// }

void insert(int data)
{
    Node *temp = new Node();
    struct Node *parent;
    struct Node *current;
    temp->data = data;
    temp->left_child = NULL;
    temp->right_child = NULL;

    // if tree is empty, create root node
    if (root == NULL)
    {
        root = temp;
        cout << data <<" inserted at root node ";
    }
    else
    {
        current = root;
        parent = NULL;
        while (1)
        {
            parent = current;
            // go to left of the tree
            if (data < parent->data)
            {
                current = current->left_child;
                // insert at left
                if (current == NULL)
                {
                    parent->left_child = temp;
                    return;
                }
            }
            // go to right
            else
            {
                current = current->right_child;
                //   insert at right
                if (current == NULL)
                {
                    parent->right_child = temp;
                    return;
                }
            }
        }
    }
    // cout << " inserted ";
}
void inOrder(struct Node *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left_child);
        printf("%d\t", ptr->data);
        inOrder(ptr->right_child);
    }
}
void preOrder(struct Node *ptr)
{
    if (ptr)
    {
        printf("%d\t", ptr->data);
        inOrder(ptr->left_child);
        inOrder(ptr->right_child);
    }
}
void postOrder(struct Node *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left_child);
        inOrder(ptr->right_child);
        printf("%d\t", ptr->data);
    }
}
int main()
{
    insert(6);
    insert(1);
    insert(2);
    insert(3); 
    insert(4);
    insert(5);
    struct Node *ptr;
    ptr = root;
    inOrder(ptr);
    printf(" InOrder \n");
    preOrder(ptr);
    printf(" PreOrder \n");
    postOrder(ptr);
    printf(" PostOrder \n");

}
