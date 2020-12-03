#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data= data;
        this->next = NULL;
    }
};
node* create(){
    int data;
    cout<<"Enter the data to insert :: ";
    cin>>data;
    node* head = NULL;
    node* temp =NULL;
    while(data!=-1){
        node* n = new node(data);
        if(head == NULL){
            head = n;
            temp = head;
        }
        else{
            temp->next = n;
            temp = temp->next;
        }
        cout<<"Enter the data to insert :: ";
        cin>>data;
    }
    return head;    
}
node* insert_at_begining(node* head){
    int data;
    cout<<"Enter the data to insert at begining ::";
    cin>>data;
    node* n = new node(data);
    n->next = head;
    head = n;
    return head;
}
void insert_at_end(node* head){
    int data;
    cout<<"Enter the data to insert at end ::";
    cin>>data;
    node* n= new node(data);
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
}
node* insert_in_between(node* head){
    int data,index;
    cout<<"Enter the data and index to insert the data ::";
    cin>>data>>index;
    node* n = new node(data);
    if(index==0){
        n->next = head;
        head = n;
        return head;
    }
    int i=1;
    node* temp = head;
    while(temp!=NULL && i< index){
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
    return head;
}
void display(node* head){
    node* temp = head;
    cout<<"Display :: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void delete_from_end(node* head){
    node* temp = head;
    node* prev;
    while(temp->next!= NULL){
        prev = temp;
        temp = temp->next;
    }
    cout<<"Data Deleted from End ::"<<temp->data<<endl;
    prev->next = NULL;
    delete temp;
}
node* delete_from_begining(node* head){
    cout<<"Data Deleted from Begining :: "<<head->data<<"\n";
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
node* delete_from_between(node* head){
    int data;
    cout<<"Enter the data to delete ::";
    cin>>data;
    if(head->data == data){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node* temp = head;
    node* prev = NULL;
    while(temp->data!= data){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}
int main(){
    node* head = create();
    display(head);
    head = insert_at_begining(head);
    display(head);
    insert_at_end(head);
    display(head);
    head = insert_in_between(head);
    display(head);
    head = delete_from_begining(head);
    display(head);
    head = delete_from_between(head);
    display(head);
    delete_from_end(head);
    display(head);
    return 0;
}