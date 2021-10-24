#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return (n &( 1<<pos)) != 0;
}

void unique2(int arr[] , int n){
    int xorsum =0;

    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit =0;
    int pos =0;
    while (setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newXor =0;
    for(int i =0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newXor = newXor^arr[i];
        }
    }

    cout<<newXor<<endl;
    cout<<(tempxor^newXor)<<endl;

}

int main(){

    int arr[] = {1,2,3,1,2,3,5,7};
    unique2(arr,8);
    return 0;
    
}