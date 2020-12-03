#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data = data;
        this->next= NULL;
        this->prev =NULL;
    }
};
node* create(){
    int data;
    cout<<"Enter the data to insert ::";
    cin>>data;
    node* head = NULL;
    node* temp = NULL;
    while(data!=-1){
        node* n = new node(data);
        if(head == NULL){
            head = n;
            temp = head;
        }
        else{
            temp->next = n;
            n->prev = temp;
            temp = n;
        }
        cout<<"Enter the data to insert ::";
        cin>>data;
    }
    return head;
}
void display(node* head){
    node* temp = head;
    cout<<"Display :: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
node* insert_between(node* head){
    int data,index;
    cout<<"Enter the data and position to insert :: ";
    cin>>data>>index;
    int i=1;
    node* n = new node(data);
    node* temp = head;
    if(index-1 == 0){
        n->next = head;
        head->prev = n;
        head = n;
        return head;
    }
    while(temp->next!=NULL && i<(index-1)){
        temp = temp->next;
        i++;
    }
    temp->next->prev = n;
    n->next = temp->next;
    n->prev = temp;
    temp->next = n;
    return head;
}
node* insert_at_beginning(node* head){
    int data;
    cout<<"Enter the data to insert at beginning ::";
    cin>>data;
    node* n = new node(data);
    n->next = head;
    head->prev = n;
    head = n;
    return head;
}
node* insert_at_end(node* head){
    int data;
    cout<<"Enter the data to insert at end ::";
    cin>>data;
    node* n=new node(data);
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    return head;
}
node* delete_from_beginning(node* head){
    node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}
void delete_from_end(node* head){
    node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}
node* delete_from_between(node* head){
    int data;
    cout<<"Enter the data to delete ::";
    cin>>data;
    if(head->data == data){
        head = delete_from_beginning(head);
        return head;
    }
    node* temp = head;
    while(temp->data!= data && temp!= NULL){
        temp = temp->next;
    }
    if(temp->next == NULL){
        delete_from_end(head);
        return head;
    }
    temp->next->prev = temp->prev;;
    temp->prev->next = temp->next;
    delete temp;
    return head;
}
int main(){
    node* head = create();
    display(head);
    head = delete_from_between(head);
    display(head);
    head = insert_between(head);
    display(head);
    delete_from_end(head);
    display(head);
    head = insert_at_end(head);
    display(head);
    head = delete_from_beginning(head);
    display(head);
    head = insert_at_beginning(head);
    display(head);
}