#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(struct node* root)
{
    if(!root)
    return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int search(int val,int in[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(in[i]==val)
        return i;
    }
    return -1;
}
struct node* build(int n,int pre[],int in[],int st,int en)
{
    static int i=0;
    if(st>en)
    return NULL;
        struct node *root=new node(pre[i++]);
        if(st==en)
        return root;
        int index=search(pre[i-1],in,n);
        root->left=build(n,pre,in,st,index-1);
        root->right=build(n,pre,in,index+1,en);
    return root;
}
int main()
{
    int n=8;
    int pre[]={1,2,3,4,5,6,7,8};
    int in[]={8,4,2,5,1,6,3,7};
    struct node *root;
    root=build(n-1,pre,in,0,n-1);
    inorder(root);
}