#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5+2, MOD = 1e9+7;

int toient[N];

signed main(){

    for(int i =0; i<N; i++){
        toient[i] = i;
    }

    for(int i = 2; i<N; i++){
        if(toient[i] == i){
            for(int j = 2*i; j<N; j+=i){
                toient[j] *= i-1;
                toient[j]/= i;
            }
            toient[i] = i-1;
        }
    }

    for (int i = 2; i <11; i++)
    {
        cout<<toient[i]<<" ";
    }
    
}