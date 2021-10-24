#include<bits/stdc++.h>
using namespace std;
//function overloading

// class ApnaCollege{
//     public:
//         void fun(){
//             cout<<"i am a fun with no arguments"<<endl;
//         }

//         void fun(int x){
//             cout<<"i am a fun with int arguments"<<endl;
//         }

//         void fun(double x){
//             cout<<"i am a fun with double arguments"<<endl;
//         }
// };

//operator overloading

// class Complex{
//     private:
//      int real;
//      int imag;

//      public:
//         Complex(int r, int i){
//             real = r;
//             imag = i;
//         }

//         Complex operator + (Complex const &obj){
//             Complex res;
//             res.imag = imag + obj.imag;
//             res.real = real + obj.real;

//             return res;
//         }

//         void display(){
//             cout<<real<<" +i"<<imag<<endl;
//         }
// };

class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print fun"<<endl;
    }

    void display(){
        cout<<"this is the base class's display fun"<<endl;
    }
};

class derived: public base{
    public:
        void print(){
            cout<<"this is the derived class's print fun"<<endl;
        }

        void display(){
            cout<<"this is the derived class's display fun"<<endl;
        }
};
int main(){
    // ApnaCollege obj;

    // obj.fun();
    // obj.fun(4);
    // obj.fun(8.3);

    // Complex c1(12,7), c2(6,7);
    // Complex c3 = c1 + c2;
    // c3.display();

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr ->print();

    baseptr ->display();

    return 0;
}