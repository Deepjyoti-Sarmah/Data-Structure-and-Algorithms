#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define ff first;
#define ss second;
#define setBits(x) builtin_popcount(x)

signed main(){

    int  k; cin>>k;
    vector<vector<int>> a(k);

    rep(i,0,k){

        int size;
        cin>>size;

        a[i] = vector<int>(size);
        rep(j,0,size){
            cin>>a[i][j];
        }
    }

    vector<int> idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>> pq;

    rep(i,0 ,k){

        pii p;
        p.first = a[i][0];
        p.second = i;
        pq.push(p);
    }
    vii ans;

    while (!pq.empty())
    {
        pii x = pq.top();
        pq.pop();

        ans.push_back(x);

        if(idx[x.second]+1 < a[x.second].size()){

            pii p;
            p.first = a[x.second][idx[x.second]+1];
            p.second = x.second;

            pq.push(p);

            idx[x.second]+=1;
        }

        rep(i,0,ans.size()){
            
         //   cout<<ans[i]<<endl;
        }
        cout<<endl;
    }

    return 0;
}