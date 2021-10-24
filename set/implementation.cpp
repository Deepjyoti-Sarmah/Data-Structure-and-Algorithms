#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    // multiset<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);

    // for(auto i: s){
    //     cout<<i<<" ";
    // }cout<<endl;

    // // cout<<s.size()<<endl;

    // s.erase(s.find(3));
    // for (auto i : s)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.find(3));

    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}