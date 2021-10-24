#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main(){

    int n; cin>>n;
    vector<int> dp(n+1,0);

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+(i-1)*dp[i-2];
    }

    cout<<dp[n];
}