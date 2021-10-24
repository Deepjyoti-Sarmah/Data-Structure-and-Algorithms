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

const int N = 1e3+2;
int dp[N][N];

//memoization 
// int CoinChange(vi &a,int n, int x){

//     if(x==0)
//         return 1;

//     if(x<0)
//         return 0;

//     if(n<=0)
//         return 0;

//     if(dp[n][x] != -1){
//         return dp[n][x];
//     }
    
//     dp[n][x] =  CoinChange(a,n,x-a[n-1]) + CoinChange(a,n-1,x);

//     return dp[n][x];
// }

// signed main(){

//     int n;
//     cin>>n;

//     rep(i,0,N){
//         rep(j,0,N)
//             dp[i][j] = -1;
//     }

//     vi a(n);

//     rep(i,0,n){
//         cin>>a[i];
//     }

//     int x;
//     cin>>x;

//     cout<<CoinChange(a,n,x)<<endl;
// }

signed main(){

    int n;
    cin>>n;


    vi a(n);

    rep(i,0,n){
        cin>>a[i];
    }

    int x;
    cin>>x;

    vvi dp(n+1,vi(x+1,0));

    dp[0][0] = 1;

    rep(i,0,n+1){
        rep(j,0,x+1){

            if(j-a[i-1]>=0)
                dp[i][j] += dp[i][j-a[i-1]];
            dp[i][j]+= dp[i-1][j];
            
        }
    }

    //cout<< dp[x];
}