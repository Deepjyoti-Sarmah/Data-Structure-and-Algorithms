#include<iostream>
using namespace std;

void towerofHanoi(int n, char scr, char dest, char helper){

    if(n==0){
        return;
    }

    towerofHanoi(n-1,scr,helper,dest);

    cout<<"Move from "<<scr<<" to "<<dest<<endl;

    towerofHanoi(n-1,helper,dest,scr);

}

int main(){

    towerofHanoi(3,'A','C','B');

    return 0;
}