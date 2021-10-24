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

struct Info{

    int size;
    int max;
    int min;
    int ans;
    bool isBST;

};

Info largestBSTinBt(Node* root){

    if(root == NULL){
        return { 0, INT_MIN, INT_MAX, 0 , true};
    }

    if( root->left == NULL && root->right == NULL){
        return { 1 , root->data, root->data , 1, true };
    }

    Info leftInfo = largestBSTinBt(root->left);
    Info rightInfo = largestBSTinBt(root->right);

    Info curr;

    curr.size = leftInfo.size + rightInfo.size + 1;

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data){

        curr.min = min(leftInfo.min, min(rightInfo.min,root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max,root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr; 
    }

    curr.ans = max(leftInfo.ans,rightInfo.ans);
    curr.isBST = false;

    return curr;
}


int main(){

    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(30);

    cout<<largestBSTinBt(root).ans<<endl;
    
    return 0;
}