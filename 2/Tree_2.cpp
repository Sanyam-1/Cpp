#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class tree{
    public:
    T data;
    vector<tree<int>*> children;
    tree(T data){
        this->data = data;
    }
};
tree<int>* create_level_wise(){
    int data;
    cout<<"Enter the data of root:";
    cin>>data;
    tree<int>* root = new tree<int>(data);
    queue<tree<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        tree<int>* front = pending.front();
        pending.pop();
        int num ;
        cout<<"Enter number of children of "<<front->data<<" :";
        cin>>num;
        for(int i=0;i<num;i++){
            cout<<"Enter the data of "<<i<<"th child of "<<front->data<<" :";
            cin>>data;
            tree<int>* n = new tree<int>(data);
            front->children.push_back(n);
            pending.push(n);
        }
    }
    return root;
}
void display(tree<int>* root){
    if(root == NULL){
        cout<<"Create tree first:";
        return ;
    }
    cout<<root->data<<" ::";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        display(root->children[i]);
    }
}
void display_level_wise(tree<int>* root){
    if(root==NULL){
        cout<<"Create Tree first:";
        return ;
    }
    cout<<"Display level wise :"<<endl;
    queue<tree<int>*> next;
    next.push(root);
    while(next.size()!=0){
        tree<int>* front = next.front();
        next.pop();
        cout<<front->data<<" : ";
        for(int i=0; i<front->children.size();i++){
            cout<<front->children[i]->data<<" , ";
            next.push(front->children[i]);
        }
        cout<<endl;
    }
}
int calculate_leaf(tree<int>* root){
    int ans = 0;
    if(root == NULL){
        cout<<"Create a tree first:";
        return 0;
    }
    if(root->children.size() == 0){
        return (ans + 1);
    }
    for(int i=0 ;i<root->children.size();i++){
        ans+=calculate_leaf(root->children[i]);
    }
    return ans;
}
int calculate_nodes(tree<int>* root){
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans += calculate_nodes(root->children[i]);
    }
    return ans;
}
int height_of_tree(tree<int>* root){
    int a=0,ar[5];
    for(int i=0;i<root->children.size();i++){
        ar[i] = height_of_tree(root->children[i]);
        cout<<"::"<<ar[i]<<endl;
        for(int i=0;i<root->children.size();i++){
            if(ar[i]>a){
                a=ar[i];
            }
        }
    }
    return (a+1);
}
void post_order_trevarsal(tree<int>* root){
    if(root == NULL){
        cout<<"Create tree first:";
        return ;
    }
    for(int i=0;i<root->children.size();i++){
        post_order_trevarsal(root->children[i]);
    }
    cout<<root->data<<" ";
}
void delete_tree(tree<int>* root){
    if(root == NULL){
        cout<<"Create a Tree first : ";
        return ;
    }
    for(int i=0 ; i<root->children.size() ; i++){
        delete_tree(root->children[i]);
    }
    delete root;
}
int main(){
    tree<int>* root = create_level_wise();
    display(root);
    cout<<endl;
    display_level_wise(root);
    cout<<"Number of nodes in tree are : "<<calculate_nodes(root);
    //cout<<"Height of the tree is : "<<height_of_tree(root);
    cout<<"Number of Leaf in the tree are : "<<calculate_leaf(root);
    cout<<"Display through Postfix traversal : ";
    post_order_trevarsal(root);
    delete_tree(root);
    post_order_trevarsal(root);
    return 0;
}