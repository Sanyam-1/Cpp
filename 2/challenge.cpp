#include<iostream.h>
using namespace std;
class vector{
    int *data;
    int size,capacity;
    public:
    vector(int size){
        this->capacity = size;
        *data = new int[capacity];
        this->size = 0;
    }
    void size(){
        cout<<"Size of vector is:"<<size;
    }
    void capacity(){
        cout<<"Capacity of vector is:"<<capacity;
    }
    void is_Empty(){
        if(size==0){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    int at(int index){
        if(index>size){
            return -1;
        }
        return data[index];
    }
    void push(int item){
        data[size] = item;
        size++;
    }
    
};