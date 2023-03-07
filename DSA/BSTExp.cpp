#include <iostream>
using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
} *root;

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }
    bool isTree()
    {
        if (root == NULL)
            return true;
        else
            return false;
    }
};

void insertNode(TreeNode *newNode)
{
    if (root == NULL)
    {
        root = newNode;
        cout << " Value Inserted ";
    }
    else
    {
        TreeNode *temp = root;
        while (temp != NULL)
        {
            if (newNode->value == temp->value)
            {
                cout << " Value Already exist \n Insert Another Value ";
                return;
            }
            else if ((newNode->value < temp->value) && (temp->left == NULL))
            {
                temp->left = newNode;
                cout << " Value Inserted at Left ";
                break;
            }
            else if (newNode->value < temp->value)
            {
                temp = temp->left;
            }
            else if ((newNode->value > temp->value) && (temp->right == NULL))
            {
                temp->right = newNode;
                cout << " Value Inserted At Right ";
                break;
            }
            else
            {
                temp = temp->right;
            }
        }
    }
}

int main()
{
    BST obj;
    TreeNode *newNode = new TreeNode();

}