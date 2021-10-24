#include<iostream>
using namespace std;

bool ispowTwo(int n){
    return (n && !(n & n-1));
}

int main(){
    
    cout<<ispowTwo(14)<<endl;

    return 0;
}