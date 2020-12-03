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
node* insert_at_begining(node* head){
    cout<<"Enter the data:";
    int data;
    cin>>data;
    node* n=new node(data);
    if(head==NULL){
        head = n;
        return head;
    }
    n->next=head;
    head=n;
    return head;
}
node* insert_in_between(node* head){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    int pos;
    cout<<"Enter the position to insert node :";
    cin>>pos;
    node* n = new node(data);
    if(head == NULL){
        head = n;
    }
    else if(pos ==1){
        n->next = head;
        head = n;
    }
    else{
        node* temp = head;
        for(int i=0;i<pos-2;i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
    }
    return head;
}
node* insert_at_end(node* head){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    node* n=new node(data);
    if(head==NULL){
        head=n;
        return head;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        return head;
    }
}
void display(node* head){
    if(head == NULL){
        cout<<"Create Linked List first:";
        return;
    }
    node* temp = head;
    cout<<"Display:";
    while(temp!=NULL){
        cout<<temp->data<<" \n";
        temp = temp->next;
    }
}
node* create(){
    node* head;
    char c='y';
    int ch;
    while(c=='y'||c=='Y'){
        cout<<"Enter your choice: \n1.At Begining\n2.At End\n3.In between";
        cin>>ch;
        switch (ch)
        {
            case 1:
                head = insert_at_begining(head);
                break;
            case 2:
                head = insert_at_end(head);
                break;
            case 3:
                head = insert_in_between(head);
                break;
            default:
                cout<<"Enter a valid choice:";
                break;
        }
        cout<<"Enter your choice:\nDo you want to insert more? :: ";
        cin>>c;
    }
    return head;
}
int main(){
    node* head = insert_at_end(head);
    display(head);
}