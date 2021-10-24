#include<iostream>
using namespace std;

class node{
    public :
      int data;
      node* next;

      node(int val){
          data = val;
          next = NULL;
      }
};

void InsertAtHead(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    head = n;
}

void IntertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head ==NULL){
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

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head){

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr ;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr  = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head){

    if(head ==NULL || head->next ==NULL){
        return head;
    }

    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main(){

    node* head = NULL;
    IntertAtTail(head,1);
    IntertAtTail(head,2);
    IntertAtTail(head,3);
    
    InsertAtHead(head,0);
    display(head);

    node* newHead = reverseRecursive(head);
    display(newHead);


    return 0;
}