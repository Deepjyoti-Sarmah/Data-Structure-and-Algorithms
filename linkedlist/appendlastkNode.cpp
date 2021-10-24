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

void InsertAtHead(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    head = n;
}

void InsertAtTail(node* &head, int val){

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

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head){

    int l = 0;
    node* temp = head;

    while (temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* kAppend(node* &head, int k){

    
    node* NewHead;
    node* NewTail ;
    node* tail = head;

    int l = length(head);
    k = k%l;
    int count = 1;

    while(tail->next != NULL){
        if(count == l-k){
            NewTail = tail;
        }
        if(count == l-k+1){
            NewHead = tail;
        }
        tail = tail->next;
        count++;
    }

    NewTail->next = NULL;
    tail->next = head;

    return NewHead;
}

int main(){

    node* head = NULL;

    int arr[] = {1,2,3,4,5,6};

    for(int i =0; i<6; i++){
        InsertAtTail(head,arr[i]);
    }
    display(head);

    node* newHead = kAppend(head, 3);
    display(newHead);




    return 0;
}