#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* create(node* head){
    node* tail;
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
        tail = temp;
    }
    int data,ch;
    cout<<"Enter a data:";
    cin>>data;
    node* n = new node(data);
    cout<<"Enter your choice: \n1.Begining\n2.End\n3.In between";
    cin>>ch;
    switch(ch){
        case 1:
        if(head==NULL){
            head = n;
            tail =n;
        }
        else{
            n->next = head;
            head =n;
        }
        
        case 2:
        if(head = NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail= n;
        }
        case 3:
        int pos;
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            temp = head;
            cout<<"Enter the postion to insert :";
            cin>>pos;
            if(pos == 1){
                n->next = head;
                head = n;
            }
            else{
                for(int i=0;i<pos-2;i++){
                    temp = temp->next;
                }
                n->next = temp->next;
                temp->next = n;
            }
        }   
        default:
        cout<<"Enter a valid choice:";
    }
    return head;
}
int display(node* head){
    if(head == NULL){
        cout<<"Create linked list first:";
    }
    else{
        node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }
    return 0;
}
int main(){
    char ch='y';
    node* head = NULL;
    while(ch=='y'||ch=='Y'){
        head = create(head);
        cout<<"Enter your choice \n Do you want to insert more elements? :: ";
        cin>>ch;
    }
    display(head);
    return 0;
}