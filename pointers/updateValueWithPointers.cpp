#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    int *aptr = &a;

    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;
    
    return 0;
}