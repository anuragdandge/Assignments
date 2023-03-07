#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*front,*rear;

class Queue{
    public : 
    void Enqueue(int data){
         Node *temp = new Node;
         temp->data = data;
         temp->next = NULL;
         if(front == NULL && rear == NULL){
            front = temp;
            rear = temp;
         }else{
            Node *current = rear;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = temp ;
            rear = temp ;
         }
    }
    void Dequeue(){
        Node *temp = front ; 
        front = temp->next;
        delete temp;
    }
    void Display(){
        Node *temp = front ; 
        while(temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main(){
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Display();
}

