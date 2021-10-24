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

void zigzagBST(Node* root){

    if(root == NULL){
        return;
    }

    stack<Node*> currLevel;
    stack<Node*> nextlevel;

    bool leftToright = true;
    currLevel.push(root);

    while(!currLevel.empty()){

        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp){

            cout<<temp->data<<" ";

            if(leftToright){
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if(temp->right)
                {
                    nextlevel.push(temp->right);
                }
                
            }
            else
            {
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if(temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
            
        }

        if (currLevel.empty())
        {
            leftToright = !leftToright;
            swap(currLevel,nextlevel);
        }
        
    }
}


int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);

    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);

    zigzagBST(root);
    cout<<endl;

    
    return 0;
}