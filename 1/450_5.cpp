#include<iostream>
using namespace std;
int main(){
    int a[] = {-1,0,-5,-2,4,-6,3,-7,5,-4};
    int s = sizeof(a)/sizeof(a[0]);
    int l=0,t;
    for(int i=0;i<s;i++){
        if(a[i]<0){
            t= a[i];
            a[i] = a[l];
            a[l] = t;
            l++;
        }
    }
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}