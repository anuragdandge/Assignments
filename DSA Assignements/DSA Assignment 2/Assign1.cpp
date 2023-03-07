#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
};

void insert(Node*& head, int data) {
  // Insert a new node at the head of the list
  head = new Node{data, head};
}

void display(Node* head) {
  // Print the data of each node in the list
  Node* current = head;
  while (current != nullptr) {
    cout << current->data << endl;
    current = current->next;
  }
}

void deleteNode(Node*& head, int data) {
  // Find the node with the given data and delete it
  Node* current = head;
  Node* prev = nullptr;
  while (current != nullptr) {
    if (current->data == data) {
      // Modify the next pointer of the previous node to skip the current node
      if (prev != nullptr) {
        prev->next = current->next;
      } else {
        // If the node to delete is the head node, update the head pointer
        head = current->next;
      }

      // Delete the current node
      delete current;

      break;
    }

    prev = current;
    current = current->next;
  }
}

int main() {
  // Create the head node
  Node* head = nullptr;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Insert" << endl;
    cout << "2. Display" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
      // Insert a new node
      int data;
      cout << "Enter the data for the new node: ";
      cin >> data;
      insert(head, data);
    } else if (choice == 2) {
      // Display the list
      display(head);
    } else if (choice == 3) {
      // Delete a node
      int data;
      cout << "Enter the data of the node to delete: ";
      cin >> data;
      deleteNode(head, data);
    } else if (choice == 4) {
      // Quit the program
      break;
    } else {
      cout << "Invalid choice." << endl;
    }
  }

  return 0;
}
