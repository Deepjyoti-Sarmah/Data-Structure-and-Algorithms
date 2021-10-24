#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[] , int n){
    int cursum =0;
    int maxSum = INT_MIN; 
    for(int i=0; i<n; i++){
        cursum += a[i];
        if(cursum<0){
            cursum =0;
        }
        maxSum = max(cursum,maxSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int wrapsum;
    int nonwrapSum ;
    nonwrapSum = kadane(a,n);
    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalSum + kadane(a,n);

    cout<<max(wrapsum,nonwrapSum);
    
    return 0;
}