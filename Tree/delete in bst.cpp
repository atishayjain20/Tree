node* delete(node* root,int key)
{
    if(root->data<key){
        root->right=delete(root->right,key);
    }
    if(root->data>key)
    root->left=delete(root->left,key);
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        } 
        else if(root->right==NULL){
            node *temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inordersuccr(root->right);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);
    }
}