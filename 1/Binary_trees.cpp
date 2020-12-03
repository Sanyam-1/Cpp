#include<iostream>
using namespace std;
template<typename T>
class tree{
    public:
    T data;
    tree<T>* left;
    tree<T>* right;
    tree(T data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
tree<int>* create(){
    int data;
    cout<<"Enter the data ::";
    cin>>data;
    tree<int>* n = NULL;
    if(data == -1){ 
       tree<int>* node = NULL;
    }
    while(data!=1){
        tree<int>* node = new tree<int>(data);
        tree<int>* left = create();
        tree<int>* right = create();
        if(left!=NULL){
            node->left = left;
        }
        if(right!=NULL){
            node->right = right;
        }
        n = node;
    }
    return n;
}
void display(tree<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    tree<int>* root = new tree<int>(1);
    tree<int>* root1 = new tree<int>(2);
    tree<int>* root2 = new tree<int>(3);
    root->left = root1;
    root->right = root2;
    display(root);
    return 0;
}