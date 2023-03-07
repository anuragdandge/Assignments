#include <iostream>
using namespace std;
int count = 0;
struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
};
struct Node
{
    int data;
    struct Node *next;
} *front, *rear;
// class Queue{

//     public :
Enqueue(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        Node *current = rear;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
        rear = temp;
    }
}
struct Node *Dequeue(){
    Node *temp = front;
    front = temp->next;
    delete temp;
    return front;
}

void Display(){
    Node *temp = front;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void levelWiseTraversal(struct node *ptr)
{
    while (!ptr)
    {
        cout << ptr->data;
        Enqueue(ptr->left->data);
        Enqueue(ptr->right->data);
        ptr = Dequeue();
    }
    Display();
}
// };
struct TreeNode *create()
{
    struct TreeNode *temp = new TreeNode;
    int num, choice;
    cout << " \n Enter choice ";
    cout << " \n To Exit Press 0 ";
    cout << " \n To Add Nodes Press 1\t ";
    cin >> choice;
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        cout << "\n Enter the Data ";
        scanf("%d", &num);
        temp->data = num;
        cout << "\n Enter The Left Child of " << num;
        temp->left = create();
        cout << "\n Enter The Right Child of " << num;
        temp->right = create();
        return temp;
    }
}

void inOrder(struct TreeNode *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left);
        cout << ptr->data << "\t";
        inOrder(ptr->right);
    }
}
void preOrder(struct TreeNode *ptr)
{
    if (ptr)
    {
        cout << ptr->data << "\t";
        inOrder(ptr->left);
        inOrder(ptr->right);
    }
}
void postOrder(struct TreeNode *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left);
        inOrder(ptr->right);
        cout << ptr->data << "\t";
    }
}

int height(struct TreeNode *ptr)
{
    if (ptr == NULL)
    {
        return -1;
    }
    else
    {
        /* compute the height of each subtree */
        int lheight = height(ptr->left);
        int rheight = height(ptr->right);
        /* use the larger one */
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

void mirror(struct TreeNode *ptr)
{
    if (!ptr)
        return;
    mirror(ptr->right);
    cout << ptr->data << "\t";
    mirror(ptr->left);
}
void leaf(struct TreeNode *ptr)
{

    if (!ptr)
    {
        return;
    }
    leaf(ptr->left);
    if (ptr->left == NULL && ptr->right == NULL)
    {
        count++;
        cout << "\nNode = " << ptr->data << ",Leaf Count =" << count;
    }
    leaf(ptr->right);
}

int main()
{
    struct TreeNode *root;
    struct TreeNode *ptr;
    root = create();
    ptr = root;
    cout << "\n InOrder traversal is\t";
    inOrder(ptr);
    cout << "\n PreOrder traversal is\t";
    preOrder(ptr);
    cout << "\n PostOrder traversal is\t";
    postOrder(ptr);
    cout << "\nHeight of tree is "
         << height(ptr) << endl;
    cout << " Mirror of Original = \n";
    mirror(ptr);
    leaf(ptr);
    levelWiseTraversal(ptr);
}
