#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int value){
		data = value;
		left=NULL;
		right=NULL;
	}
};
void printleft(node* root,int level,int maxlevel){
	if(root==NULL){
		return;
	}
	if(level>maxlevel){
		cout<<root->data<<" ";
		maxlevel = level;
	}
	printleft(root->left,level+1,maxlevel);
	printleft(root->right,level+1,maxlevel);
}
//void printleftOrder(node* root,int level,int maxlevel){
//	if(root==NULL){
//		return;
//	}
//	if(level<maxlevel)
//	{
//		cout<<root->data;
//	}
//	printleftOrder(root->left,level+1,maxlevel);
//	printleftorder(root->right,level+1,maxlevel);
//}
//int height(node* root){
//	if(root==NULL){
//		return 0;
//	}
//	return 1+max(height(root->left),height(root->right));
//}
int main(){
	node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);
//    root->right->left = new node(12);
//    root->right->right->left = new node(14);
//    int maxlevel =0;
    printleft(root,1,0);
}

