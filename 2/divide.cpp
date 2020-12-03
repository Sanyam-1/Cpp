#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<(num/2);i++){
        if(num%i==0){
            cout<<i<<" \n";
        }
    }
}