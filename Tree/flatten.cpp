//flatten
#include<bits/stdc++.h>
using namespace std;
struct node{    
        int data;
        struct node* left;
        struct node* right;
        node(int value)
        {
            data=value;
            left=NULL;
            right=NULL;
        }
};
void flatten(node* root)
{
    if(!root||(root->left&&root->right))
    return;
    flatten(root->left);
    node *temp=root->right;
    root->right=root->left;
    root->left=NULL;
    node* t=root->right;
    while(t->right!=NULL){
        t=t->right;
    }
    t->right=temp;
    flatten(root->right);
}
void preorder(node* root)
{
    if(!root)
    return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    root->left->left->right=new node(6);
    // root->right->left=new node(6);
    // root->right->right=new node(7);
    flatten(root);
    preorder(root);
}