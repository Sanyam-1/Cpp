#include<iostream>
#include<queue>
#include<vector>
using namespace std;
template<typename T>
class tree{
    public:
    T data;
    vector<tree<T>*> child;
    tree(int data){
        this->data = data;
    }
};
tree<int>* create(){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    tree<int> *root = new tree<int>(data);
    queue<tree<int>*> children;
    children.push(root);
    while(children.size()!=0){
        tree<int>* front = children.front();
        children.pop();
        int num;
        cout<<"Enter the number of children of "<<front->data<<" :";
        cin>>num;
        for(int i=0;i<num;i++){
            cout<<"Enter the "<<i<<"th child of "<<front->data<<" :";
            cin>>data;
            tree<int>* n = new tree<int>(data);
            children.push(n);
            front->child.push_back(n);
        }
    }
    return root;
}
void display(tree<int>* root){
    cout<<"Display function:";
    if(root == NULL){
        cout<<"Create a tree first:";
        return ;
    }
    queue<tree<int>*> next;
    next.push(root);
    while(next.size()!=0){
        tree<int>* front = next.front();
        next.pop();
        cout<<front->data<<" :";
        for(int i=0; i<front->child.size() ; i++){
            cout<<front->child.at(i)->data<<" , ";
            next.push(front->child[i]);
        }
        cout<<endl;
    }
}
int main(){
    tree<int>* root = create();
    display(root);
    return 0;
}