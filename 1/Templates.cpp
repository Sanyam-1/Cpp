#include<iostream>
template <typename T>
class pair{
    T a;
    T b;
    public:
    void setA(T a){
        this->a = a;
    }
    void setB(T b){
        this->b = b;
    }
    T getA(){
        return a;
    }
    T getB(){
        return b;
    }
};
int main(){
    pair<char> p1;
    p1.setA(65);
    p1.setB(66);
    std::cout<<p1.getA()<<" "<<p1.getB();
}