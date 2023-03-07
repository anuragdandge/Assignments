#include <iostream>
using namespace std;
struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
};
struct TreeNode *create()
{
    struct TreeNode *temp = new TreeNode;
    int num, choice;
    cout << " \n Enter choice ";
    cout << " \n To Exit Press 0 ";
    cout << " \n To Add Nods Press 1\t ";
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
        cout << ptr->data << "->";
        inOrder(ptr->right);
    }
}
void preOrder(struct TreeNode *ptr)
{
    if (ptr)
    {
        cout << ptr->data << "->";
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
        cout << ptr->data << "->";
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
int count = 0;

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

void print_level(TreeNode *ptr, int level_no)
{
    // Prints the nodes in the tree
    // having a level = level_no

    // We have a auxiliary ptr node
    // for printing the ptr of every
    // subtree
    if (!ptr)
    {

        return;
    }
    if (level_no == 0)
    {
        // We are at the top of a subtree
        // So print the auxiliary ptr node
        cout << ptr->data << " ";
    }
    else
    {
        // Make the auxiliary ptr node to
        // be the left and right nodes for
        // the subtrees and decrease level by 1, since
        // you are moving from top to bottom
        print_level(ptr->left, level_no - 1);
        print_level(ptr->right, level_no - 1);
    }
}
void print_level_mirror(TreeNode *ptr, int level_no)
{
    // Prints the nodes in the tree
    // having a level = level_no

    // We have a auxiliary ptr node
    // for printing the ptr of every
    // subtree
    if (!ptr)
    {

        return;
    }
    if (level_no == 0)
    {
        // We are at the top of a subtree
        // So print the auxiliary ptr node
        cout << ptr->data << " ";
    }
    else
    {
        // Make the auxiliary ptr node to
        // be the left and right nodes for
        // the subtrees and decrease level by 1, since
        // you are moving from top to bottom
        print_level_mirror(ptr->right, level_no - 1);
        print_level_mirror(ptr->left, level_no - 1);
    }
}

void print_tree_level_order(TreeNode *ptr)
{
    if (!ptr)
    {
        return;
    }
    // int h = tree_height(ptr);
    int h = height(ptr) + 1;
    // for (int i = 0; i < h; i++)
    // {
    //     cout << "\nLevel " << i + 1 << "= ";
    //     print_level(ptr, i);
    //     cout << " < - > ";
    //     print_level_mirror(ptr, i);
    // }
    cout << "\n-----Complete Level Order Traversal(Original):-----\n";
    for (int i = 0; i < h; i++)
    {
        print_level(ptr, i);
        cout << "\n";
    }
    cout << "\n-----Complete Level Order Traversal(Mirror):-----\n";
    for (int i = 0; i < h; i++)
    {
        print_level_mirror(ptr, i);
        cout << "\n";
    }
    cout << "\n";
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
    cout << "\nHeight of tree is = " << height(ptr) << endl;
    // cout << " Mirror of Original = \n";
    // mirror(ptr);
    cout << " Leaf Nodes are = ";
    leaf(ptr);
    print_tree_level_order(ptr);
}


//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 10

//  Enter The Left Child of 10
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 20

//  Enter The Left Child of 20
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 40

//  Enter The Left Child of 40
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 40
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 20
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 50

//  Enter The Left Child of 50
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 50
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 10
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 30

//  Enter The Left Child of 30
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 60

//  Enter The Left Child of 60
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 60
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 30
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     1

//  Enter the Data 70

//  Enter The Left Child of 70
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  Enter The Right Child of 70
//  Enter choice
//  To Exit Press 0
//  To Add Nods Press 1     0

//  InOrder traversal is   40->20->50->10->60->30->70->
//  PreOrder traversal is  10->40->20->50->60->30->70->
//  PostOrder traversal is 40->20->50->60->30->70->10->
// Height of tree is = 2
//  Leaf Nodes are =
// Node = 40,Leaf Count =1
// Node = 50,Leaf Count =2
// Node = 60,Leaf Count =3
// Node = 70,Leaf Count =4
// -----Complete Level Order Traversal(Original):-----
// 10
// 20 30
// 40 50 60 70

// -----Complete Level Order Traversal(Mirror):-----
// 10
// 30 20
// 70 60 50 40
