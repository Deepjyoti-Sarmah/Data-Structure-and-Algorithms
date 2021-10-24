#include<iostream>
using namespace std;

class node{
    public:
      int data;
      node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void Insert(node* &head , int val){

    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){

    node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node* &head, int k){

    node* prev = NULL;
    node* curr = head;
    node* next ;

    int count =0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

        count++;
    }

    if(next != NULL){
        head->next = reverseK(next,k);
    }

    return prev;
    
}

int main(){

    node* head = NULL;

    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    Insert(head,4);
    Insert(head,5);
    Insert(head,6);

    display(head);

    node* newHead = reverseK(head, 2);

    display(newHead);

    return 0;
}