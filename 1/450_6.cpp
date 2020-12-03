#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,6,7,8},b[]={2,3,4,5,6,7,9};
    int sa = sizeof(a)/sizeof(a[0]);
    int sb = sizeof(b)/sizeof(b[0]);
    for(int i=0;i<sa;i++){
        for(int j=0;j<sb;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    int c[20],l=0,k=0;
    for(int i=0;i<sa;i++){
        for(int j=k+1;j<sb;j++){
            if(a[i]>b[j]){
                c[l++] = b[j];
                k++;
            }
            else{
                c[l++] = a[i];
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<c[i]<<" ";
    }
}