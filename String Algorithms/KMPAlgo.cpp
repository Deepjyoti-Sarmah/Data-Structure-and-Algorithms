#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "na";
    string t = "apna collegena";

    vector<int> prefix ;

    int pos  = -1;
    int i(0), j(0);

    while(i<t.size()){
        if(t[i] == s[j]){
            j++;
            i++;
        }
        else
        {
            if(j!=0)
                j = prefix[j-1];
            else
            {
                i++;
            }
            
        }

        if(j==s.size()){
            pos = i=s.size();
            break;
        }
        
    }

    cout<<pos;
}