#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int *a,size;
    cout<<"Enter the size of array you want: ";
    cin>>size;
    a = new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter a element:";
        cin>>a[i];
    }
    // 5 231 4 67 45 143
    sort(a,a+size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the Position of max and min: ";
    cin>>k;
    cout<<a[k-1]<<" "<<a[size-k];
    delete [] a;
    return 0;
}