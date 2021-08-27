#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
// int height(struct node* root)
// {
//     if(!root)
//     return 0;
//     int l=height(root->left);
//     int r=height(root->right);
//     return max(l,r)+1;
//     //o(n)
// }
// int diameter(node *root)
// {
//     if(!root)
//     return 0;
//     int curr=height(root->left)+height(root->right)+1;
//     int leftdia=diameter(root->left);
//     int rightdia=diameter(root->right);
//     return max(curr,max(leftdia,rightdia));
//     //o(n^2);
// }
//o(n)
int diametern(node *root,int *heights)
{
    if(root==NULL){
        *heights=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldia=diametern(root->left,&lh);
    int rdia=diametern(root->right,&rh);
    int currdia=lh+rh+1;
    *heights=max(lh,rh)+1;
    return max(currdia,max(ldia,rdia));
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // cout<<height(root);
    // cout<<diameter(root);
    int heights=0;
    cout<<diametern(root,&heights);
}
