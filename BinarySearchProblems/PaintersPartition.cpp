#include<iostream>
using namespace std;

int findFessible(int border[], int n, int limit){
    int sum = 0, painters = 1;

    for(int i = 0; i<n ; i++){
        sum+=border[i];

        if(sum>limit){
            sum = border[i];
            painters++;
        }
    }
    return painters;
}

int PainterPartition(int border[], int n, int m){

    int totalLength = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        k = max(k,border[i]);
        totalLength+=border[i];
    }

    int low = k , high = totalLength;

    while (low<high)
    {
        int mid = (low+high)/2;

        int painter = findFessible(border,n,mid);

        if(painter<= m){
            high = mid;
        }else
        {
            low= mid+1;
        }
        
    }
    
    return low;
}

int main(){

    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;

    cout<<"The min time needed :"<<PainterPartition(arr,n,m);

    return 0;
}