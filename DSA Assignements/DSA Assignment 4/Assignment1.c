#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create(){
    struct node *temp;
    int num, choice;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter choice ");
    printf("\n To Exit Press 0 ");
    printf("\n To Add Nodes Press 1\t ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        printf("\n Enter the Data ");
        scanf("%d", &num);
        temp->data = num;
        printf("\n Enter The Left Child of %d", num);
        temp->left = create();
        printf("\n Enter The Right Child of %d", num);
        temp->right = create();
        return temp;
    }
}

void inOrder(struct node *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left);
        printf("%d ", ptr->data);
        inOrder(ptr->right);
    }
}
void preOrder(struct node *ptr)
{
    if (ptr)
    {
        printf("%d\t", ptr->data);
        inOrder(ptr->left);
        inOrder(ptr->right);
    }
}
void postOrder(struct node *ptr)
{
    if (ptr)
    {
        inOrder(ptr->left);
        inOrder(ptr->right);
        printf("%d\t", ptr->data);
    }
}


int height(struct node *ptr)
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

void mirror(struct node *ptr)
{
    if (!ptr)
        return;
    mirror(ptr->right);
    printf("%d ", ptr->data);
    mirror(ptr->left);
}
int count = 0;
void leaf(struct node *ptr)
{

    if (!ptr)
    {
        return;
    }
    leaf(ptr->left);
    if (ptr->left == NULL && ptr->right == NULL)
    {
        count++;
        printf("\nNode = %d, Leaf Count = %d ", ptr->data, count);
    }
    leaf(ptr->right);
}
void main()
{
    struct node *root;
    struct node *ptr;
    root = create();
    ptr = root;
    printf("\n InOrder traversal is\t");
    inOrder(ptr);
    printf("\n PreOrder traversal is\t");
    preOrder(ptr);
    printf("\n PostOrder traversal is\t");
    postOrder(ptr);
    printf("\nHeight of tree is %d \n", height(ptr));
    printf(" Mirror of Original = \n");
    mirror(ptr);
    leaf(ptr);
}

//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    1                  1

//  Enter the Data 10                          10

//  Enter The Left Child of 10
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    1                  1

//  Enter the Data 20                          20

//  Enter The Left Child of 20
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                  0

//  Enter The Right Child of 20
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                  0

//  Enter The Right Child of 10
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    1                  1

//  Enter the Data 30                          30

//  Enter The Left Child of 30
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    1                   1

//  Enter the Data 25                           25

//  Enter The Left Child of 25
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                   0

//  Enter The Right Child of 25
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                   0

//  Enter The Right Child of 30
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    1                    1

//  Enter the Data 45                            45

//  Enter The Left Child of 45
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                       0

//  Enter The Right Child of 45
//  Enter choice
//  To Exit Press 0
//  To Add Nodes Press 1    0                      0

//  InOrder traversal is   20      10      25      30      45
//  PreOrder traversal is  10      20      25      30      45
//  PostOrder traversal is 20      25      30      45      10
// Height of tree is 2