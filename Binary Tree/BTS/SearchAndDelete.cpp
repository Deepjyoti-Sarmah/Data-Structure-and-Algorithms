#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node  *left , *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

Node* insertBTS(Node* root, int val){

    if(root == NULL){
        return new Node(val);
    } 

    if (val<root->data)
    {
        root->left = insertBTS(root->left, val);
    }
   else
    {
        root->right = insertBTS(root->right, val);
    }
    return root;
}

void inorder(Node* root){

    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* searchInBTS(Node* root, int key){

    if(root == NULL){
        return NULL;
    }

    if (root->data = key)
    {
        return root;
    }

    if (root->data > key)
    {
        return searchInBTS(root->left, key);
    }

    return searchInBTS(root->right, key);

}

Node* inorderSucc(Node* root){

    Node* curr = root;

    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBTS(Node* root, int key){

    if(key<root->data){
        root->left = deleteInBTS(root->left,key);
    }
    else if(key>root->data){
        root->right = deleteInBTS(root->right,key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if( root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBTS(root->right, temp->data);
    }
    return root;
    
}

int main(){

    Node* root = NULL;

    root = insertBTS(root,5);
    insertBTS(root,1);
    insertBTS(root,3);
    insertBTS(root,4);
    insertBTS(root,2);
    insertBTS(root,7);

    // if (searchInBTS(root, 5) ==  NULL)
    // {
    //     cout<<"No"<<endl;
    // }
    // else
    // {
    //     cout<<"Yes"<<endl;
    // }

    inorder(root);
    cout<<endl;
    root = deleteInBTS(root, 2);
    cout<<endl;
    inorder(root);
    

    // inorder(root);

    return 0;
}