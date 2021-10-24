#include<iostream>
using namespace std;


int smallestSubarrayWithSum(int arr[], int n, int k){

    int sum = 0, minlength = n+1;
    int start = 0, end = 0;

    while ( end< n)
    {
        while (sum<= k && end<n)
        {
            sum+= arr[end++];
        }
        while ( sum>k && start<n)
        {
            if(end-start<minlength){
                minlength = end-start;
            }
            sum-= arr[start++];
        }
    }
    return minlength;
    
}
int main(){

    int arr[] = {1,4,45,6,10,19};
    int n = 6;
    int x = 51;

    int minlength = smallestSubarrayWithSum(arr,n,x);

    if(minlength == n+1){
        cout<<"Doesn't exist"<<endl;
    }else
    {
        cout<<minlength<<" is the smallest subarray size with sum grater than :"<<x<<endl;
    }
    

    return 0;
}