#include<iostream>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"default"<<endl;
    }//default constructor

    student(string s, int a, int g){
        name = s;
        age = a; 
        gender = g;
        cout<<"parameterised constructor "<<endl;
    }//parameterised constructor

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;

        cout<<"copy-const"<<endl;
    }

    ~student(){
        cout<<"destructor"<<endl;
    }

    void setname(string s){
        name = s;
    }

    void  getname(){
        cout<<name<<endl;
    }

    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
};

int main(){
    // student arr[2];

    // for(int i =0; i<2; i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setname(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }

    // for(int i =0; i<2; i++){
    //     arr[i].print();
    // }

    student a("Deep", 19, 0);
   // a.print();
    student b("hi", 98, 1);
    student c = a;

    if (b==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
    
    

    return 0;
}