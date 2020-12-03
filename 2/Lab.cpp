#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void enqueue(int val){
    if(front==NULL || rear==NULL){
        Node *newNode;
        newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        front = newNode;
        rear = newNode;
    }
    else{
        Node *newNode;
        newNode = new Node;
        newNode->data = val;
        rear->next = newNode;
        newNode->next = front;
        rear = newNode;
    }
}
void dequeue(){
    if(front == NULL){
        cout<<"Queue is Empty ";
    }
    Node *n;
    n = front;
    front = front->next;
    delete(n);
}
void display(){
    Node *ptr = front;
    cout<<"Display :: ";
    do
    {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }while(ptr != rear->next);
    cout<<endl;
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    enqueue(6);
    display();
    dequeue();
    display();
    return 0;
}