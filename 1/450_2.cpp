#include<iostream>
using namespace std;
int main(){
    int a[5],max,min;
    for(int i=0;i<5;i++)
    {
        cout<<"ENTER A ELEMENT:";
        cin>>a[i];
    }
    max = min = a[0];
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
        if(max<a[i])
        max = a[i];
        if(min>a[i])
        min = a[i];
    }
    cout<<"maximum is: "<<max<<endl;
    cout<<"Minimum is: "<<min;
}