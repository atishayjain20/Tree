#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root,int value)
{
    if(root==NULL)
    return new node(value);
    if(value>root->data)
    root->right=insert(root->right,value);
    else{
        root->left=insert(root->left,value);
    }
    return root;
}
void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);
    inorder(root);
}