#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
    for(int i=0;i<5;i++){
        cout<<"Enter the data:";
        cin>>a;
        v.push_back(a);
        cout<<v.capacity();
    }
    cout<<v.size();
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<endl;
    }
    v.pop_back();
    return 0;
}