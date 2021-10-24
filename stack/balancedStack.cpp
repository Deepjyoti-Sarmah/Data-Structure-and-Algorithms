#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){

    stack<char> st;
    bool ans = true;
    int n = s.size();

    for(int i =0; i<n; i++){

        if(s[i] =='(' or s[i] =='{' or s[i] == '['){
            st.push(s[i]);
        }

        else if(!st.empty() and s[i] ==')'){
            if (st.top() =='(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i] =='}'){
            if (st.top() =='{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i] ==']'){
            if (st.top() =='[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        return false;
    }
    
    return true;
}

int main(){

    string s = "{[(])}";

    if(isValid(s)){
        cout<<"Balanced string"<<endl;
    }
    else
    {
        cout<<"Not Balanced "<<endl;
    }

    return 0;
    
}