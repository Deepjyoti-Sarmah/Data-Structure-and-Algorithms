#include<iostream>
using namespace std;

int numberofOne(int n){
    int count = 0;
    while (n)
    {
        n =  n & (n-1);
        count++;
    }
    return count;
}

int main(){

    cout<<numberofOne(19)<<endl;
    return 0;
}
