#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
  Node* prev;
};

Node* head = nullptr;

void insertAtHead(int data) {
  // Create a new node
  Node* newNode = new Node{data, head, nullptr};

  // Update the next pointer of the new node to point to the current head
  newNode->next = head;

  // Update the prev pointer of the head to point to the new node
  if (head != nullptr) {
    head->prev = newNode;
  }

  // Update the head pointer to point to the new node
  head = newNode;
}

void display() {
  Node* current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void deleteNode(int data) {
  Node* current = head;
  while (current != nullptr) {
    if (current->data == data) {
      // Update the next pointer of the previous node to skip the current node
      if (current->prev != nullptr) {
        current->prev->next = current->next;
      } else {
        // Update the head pointer if the current node is the head
        head = current->next;
      }

      // Update the prev pointer of the next node to skip the current node
      if (current->next != nullptr) {
        current->next->prev = current->prev;
      }

      // Delete the current node
      delete current;

      break;
    }
    current = current->next;
  }
}

int main() {
  // Menu loop
  while (true) {
    cout << "1. Insert at head" << endl;
    cout << "2. Display" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Quit" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
      int data;
      cout << "Enter data: ";
      cin >> data;
      insertAtHead(data);
    } else if (choice == 2) {
      display();
    } else if (choice == 3) {
      int data;
      cout << "Enter data: ";
      cin >> data;
      deleteNode(data);
    } else if (choice == 4) {
      break;
    }
  }

  return 0;
}
