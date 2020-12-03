#include<iostream>
using namespace std;
int main(){
    int a[] ={0,0,1,0,1,2,0,1,0,2,2,1,0};
    int k = sizeof(a)/sizeof(a[0]);
    int l=0,t;
    for(int i=0;i<k ; i++){
        if(a[i]==0){
            t = a[l];
            a[l] = a[i];
            a[i] = t;
            l++;
        }
    }
    for(int i=0;i<k ; i++){
        if(a[i]==1){
            t = a[l];
            a[l] = a[i];
            a[i] = t;
            l++;
        }
    }
    for(int i=0;i<k ; i++){
        if(a[i]==2){
            t = a[l];
            a[l] = a[i];
            a[i] = t;
            l++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}