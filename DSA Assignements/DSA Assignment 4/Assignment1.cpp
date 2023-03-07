// 4.1 Create Binary Tree and perform recursive Traversals


#include <iostream>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode *left, *right;
};
struct TreeNode *create()
{
    struct TreeNode *temp = new TreeNode;
    int num, choice;
    // cout << " \n Enter choice ";
    cout << "\n To Exit Press [0] \n To Add Nodes Press [1]\t = ";
    cin >> choice;
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        cout << " Enter the Data ";
        scanf("%d", &num);
        temp->data = num;
        cout << "\n Add Left Child of {" << num << "}";
        temp->left = create();
        cout << "\n Add Right Child of {" << num << "}";
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
}


// Input : 1,10,1,20,1,40,0,0,1,50,0,0,1,30,1,60,0,0,1,70,0,0

//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 10

//  Add Left Child of {10}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 20

//  Add Left Child of {20}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 40

//  Add Left Child of {40}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {40}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {20}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 50

//  Add Left Child of {50}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {50}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {10}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 30

//  Add Left Child of {30}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 60

//  Add Left Child of {60}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {60}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {30}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 1
//  Enter the Data 70

//  Add Left Child of {70}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  Add Right Child of {70}
//  To Exit Press [0]
//  To Add Nodes Press [1]  = 0

//  InOrder traversal is   40      20      50      10      60      30      70
//  PreOrder traversal is  10      40      20      50      60      30      70
//  PostOrder traversal is 40      20      50      60      30      70      10