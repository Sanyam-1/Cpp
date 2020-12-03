#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=1;i<size+1;i++){
        cout<<a[i%size]<<" ";
    }
    return 0;
}