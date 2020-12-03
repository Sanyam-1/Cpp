#include<iostream>
class queue{
    int *q;
    int capacity;
    int rear;
    int front;
    public:
    queue(int size){
        rear=-1;
        front=-1;
        capacity = size;
        *q = new int[size];
    }
    int insert(){
        int a = 0;
        while(a!=-1){
            if(rear==capacity-1 && front==0){
                std::cout<<"Queue is full:";
                return 0;
            }
            else if(rear == front-1){
                std::cout<<"Queue is full:";
                return 0;
            }   
            if(front==-1 && rear == -1){
                front++;
                rear++;
                q[rear]=a;
            }
            else if(front>0 && rear == capacity-1){
                rear = 0;
                q[rear] = a;
            }
            else{
                rear++;
                q[rear] = a;
            }
            std::cout<<"Enter a element to insert:";
            std::cin>>a;
        }
        
    }
    int display(){
        if(front == -1 && rear == -1){
            std::cout<<"Create queue first:";
            return 0;
        }
        if(front > rear){
            for(int i = front;i < capacity; i++){
                std::cout<<q[i];
            }
            for()
        }
    }
};
int main(){
    
}