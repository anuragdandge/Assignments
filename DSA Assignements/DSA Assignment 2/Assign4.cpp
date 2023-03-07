#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

void insertAtHead(Node *&head, int val)
{
  Node *n = new Node(val);
  
  if (head == NULL)
  {
    n->next = n;
    head = n;
    return;
  }
  Node *temp = head;

  while (temp->next != head)
  {
    temp = temp->next;
  }

  temp->next = n;
  n->next = head;
  head = n;
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

void insertAtTail(Node *&head, int val)
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

void DeleteAtHead(Node* &head)
{
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }

  Node *todelete = head;
  temp->next = head->next;
  head = head->next;
  delete todelete;
}

void Delete(Node* &head, int pos)
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

int main()
{

  Node *head = NULL;
  while (true)
  {
    cout << "\n Menu:" << endl;
    cout << "[1]  Insert At Head " ;
    cout << "[2]  Insert At Tail " ;
    cout << "[3]  Display " ;
    cout << "[4]  Delete At Position " ;
    cout << "[5]  Delete " ;
    cout << "[6]  Quit" ;
    cout << "\n Enter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
      // Insert a new node
      int data;
      cout << "Enter the data for the new node: ";
      cin >> data;
      insertAtHead(head, data);
    }
    else if (choice == 2)
    {
      // Insert a new node
      int data;
      cout << "Enter the data for the new node: ";
      cin >> data;
      insertAtTail(head, data);
    }
    else if (choice == 3)
    {

      Display(head);
    }
    else if (choice == 4)
    { int n;
      cout << "Enter position ";
      cin >> n;
      Delete(head, n);
     
    }
    else if (choice == 5)
    {
      DeleteAtHead(head);
    }
    else if (choice == 6)
    {
      break;
    }
    else
    {
      cout << "Invalid choice." << endl;
    }
  }

  return 0;
}
