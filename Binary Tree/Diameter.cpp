#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// int calcuHeight(Node* root){

//     if(root == NULL){
//         return 0;
//     }

//     int lHeight = calcuHeight(root->left);
//     int RHeight = calcuHeight(root->right);

//     return max(lHeight,RHeight)+1;
// }

int calDia(Node* root, int* height){

    if(root == NULL){
        *height= 0;
        return 0;
    }

    int lh =0, rh =0;

    int lDia = calDia(root->left,&lh);
    int rDia = calDia(root->right,&rh);

    int currDia = lh+rh+1;
    *height = max(lh,rh)+1;

    return max(currDia,max(lDia,rDia));
}

// int calcDiameter(Node* root){

//     if(root == NULL){
//         return 0;
//     }

//     int lHeight = calcuHeight(root->left);
//     int rHeight = calcuHeight(root->right);

//     int currHeight = lHeight+rHeight+1;

//     int lDiameter = calcDiameter(root->left);
//     int rDiameter = calcDiameter(root->right);

//     return max(currHeight, max(lDiameter,rDiameter));
// }

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout<<calcDiameter(root);

    int height = 0;

    cout<<calDia(root,&height);

    return 0;
}