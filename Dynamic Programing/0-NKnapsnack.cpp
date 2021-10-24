#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main(){

    int n = 5, W = 11;

    vector<int> wt = {3,2,4,5,1};
    vector<int> val = {4,3,5,6,1};
    vector<int> dp(W+1,0);

    for(int j = 0; j<=W; j++){
        for(int i =0; i<n; i++){
            if(j-wt[i]>=0){
                dp[j] = max(dp[j],val[i]+dp[j-wt[i]]);
            }
        }
    }
    cout<<dp[W];
}