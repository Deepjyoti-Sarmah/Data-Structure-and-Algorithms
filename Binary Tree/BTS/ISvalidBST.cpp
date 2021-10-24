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

bool isValidBST(Node* root, Node* min = NULL, Node* max = NULL){

    if(root == NULL){
        return true;
    }

    if(min != NULL && root->data <= min->data){
        return false;
    }

    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isValidBST(root->left, min, root);
    bool rightValid = isValidBST(root->right, root, max);

    return leftValid and rightValid;


}


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    if( isValidBST(root, NULL,NULL)){
        cout<<"Is valid "<<endl;
    }else
    {
        cout<<"Invalid"<<endl;
    }
    
    return 0;
}
