#include<iostream>
template <typename T>
class node{
    public:
    T data;
    node<T> *next;
    node(T data){
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>
class stack{
    node<T> *head= NULL;
    int size = 0;
    public:
    void push(T data){
        node<T> *n = new node<T>(data);
        n->next = head;
        head = n;
        size++;
    }
    void pop(){
        if(head == NULL){
            std::cout<<"Create Stack first:"<<std::endl;
        }
        else{
            node<T> *n = head;
            head = head->next;
            std::cout<<"Deleted Element:"<<n->data<<std::endl;
            delete n;
            size--;
        }
    }
    void Size(){
        std::cout<<size<<std::endl;
    }
    void diplay(){
        node<T> *n = head;
        std::cout<<"Display:"<<std::endl;
        while(n!=NULL){
            std::cout<<n->data<<std::endl;
            n = n->next;
        }
    }
    void top(){
        std::cout<<"Top Element is:"<<head->data<<std::endl;
    }
};
int main(){
    stack<int> s;
    int data;
    std::cout<<"Enter the value of data:";
    std::cin>>data;    
    while(data!=-1){
        s.push(data);
        std::cout<<"Enter the value of data:";
        std::cin>>data;    
    }
    s.diplay();
    s.top();
    s.pop();
    s.top();
    s.Size();
}