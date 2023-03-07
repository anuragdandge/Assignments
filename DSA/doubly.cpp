#include<iostream>
using namespace std;
struct DNode{
    int data; 
    DNode *next,*prev;
}*head;
int main (){
    DNode *temp = new DNode;
    temp->data = 10 ; 
    temp->next = NULL;
    temp->prev = NULL ; 

}