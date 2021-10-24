#include<iostream>
using namespace std;

int firstoccur(int arr[] , int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstoccur(arr, n, i+1, key);
}

int lastoccur(int arr[], int n, int i, int key){

    if(i == n){
        return -1;
    }

    int restArray = lastoccur(arr, n, i+1, key);

    if(restArray != -1){
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return -1;
    
}

int main(){
    
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstoccur(arr, 7, 0, 2)<<endl;
    cout<<lastoccur(arr, 7, 0, 2)<<endl;

    return 0;
}