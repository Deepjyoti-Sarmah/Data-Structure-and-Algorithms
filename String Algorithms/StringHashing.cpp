#include<bits/stdc++.h>
using namespace std;

int p =31;
const int N = 1e5+3, m  = 1e9+7;
vector<long long> powers(N);


// int32_t main(){

//     vector<string> strings = {"aa","ab","aa","b","cc","aa"};

//     sort(strings.begin(),strings.end());

//     int distinct = 0;

//     for(int i =0; i<strings.size(); i++){
//         if( i==0 or strings[i] != strings[i-1]){
//             distinct++;
//         }
//     }

//     cout<<distinct<<endl;
// //  TC:O(nmlog(n))    
// }

long long calculate_hash(string s){

    long long hash = 0;

    for(int i=0; i<s.size(); i++){
        hash = (hash+(s[i]-'a'+1)*powers[i])%m;
    }
    return hash;
}

int32_t main(){

    powers[0] = 1;

    for(int i =1; i<N; i++){
        powers[i] = (powers[i-1]*p)%m;
    }

    vector<string> strings = {"aa","ab","aa","b","cc","aa"};

    vector<long long> hasshes;

    for(auto w: strings){

        hasshes.push_back(calculate_hash(w));
    }
//tc: o(nm)
    sort(hasshes.begin(),hasshes.end());
    //tc:o(nlogn)

    int distinct = 0;

    for(int i =0; i<hasshes.size(); i++){
        if( i==0 or hasshes[i] != hasshes[i-1]){
            distinct++;
        }
    }

    cout<<distinct<<endl;
//  TC:O(nm + nlog(n))    
}