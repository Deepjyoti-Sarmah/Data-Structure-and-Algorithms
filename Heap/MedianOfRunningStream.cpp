#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define ff first;
#define ss second;
#define setBits(x) builtin_popcount(x)

priority_queue<int,vi,greater<int>> pqmin;
priority_queue<int,vi> pqmax;

void insert(int x){

    //if minheap == maxheap 
    if(pqmin.size() == pqmax.size()){

        //if heap is empty
        if(pqmax.size() == 0){
            pqmax.push(x);
            return;
        }
        //if heap is not empty

        if(x<pqmax.top()){
            pqmax.push(x);
            return;
        }
        else
        {
            pqmin.push(x);
        }
    }
    //if minheap is not equal maxheap
    else
    {
        //two cases

        //size of maxheap>sixe of minheap
        if(pqmax.size()>pqmin.size()){
            
            //if x is greater or equal
            if(x>=pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        //size of minheap>size of maxheap
        else
        {
            //x is smaller or equal
            if(x<=pqmin.top()){
                pqmax.push(x);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }     
        }
    }
}

double findMedian(){

    //even no of elements
    if(pqmin.size() == pqmax.size()){
        return (pqmax.top()+pqmin.top())/2.0;
    }
    //odd no of elements
    else if(pqmax.size()>pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}

signed main(){

    insert(10);
    cout<<findMedian()<<endl;
    insert(15);
    cout<<findMedian()<<endl;
    insert(21);
    cout<<findMedian()<<endl;
    insert(30);
    cout<<findMedian()<<endl;
    insert(18);
    cout<<findMedian()<<endl;
    insert(19);
    cout<<findMedian()<<endl;

    return 0;
}