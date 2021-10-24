#include<iostream>
using namespace std;

#define n 1000

class stack
{
private:
    /* data */
    int* arr;
    int top;

public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int val){

        if(top == n-1){
            cout<<"Stack is full"<<endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop(){

        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }

    int Top(){

        if(top==-1){
            cout<<"No element left"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){

        return top==-1;
    }
    
};


int main(){

    stack st;

     st.push(1);
    
     st.push(2);
     st.push(3);

    cout<<st.Top()<<endl;

    st.pop();
    cout<<st.Top()<<endl;

    st.pop();
    st.pop();
    st.pop();

   cout<< st.empty()<<endl;

    return 0;
}