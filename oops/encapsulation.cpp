#include<iostream>
using namespace std;

class A{

    public:
        int a;
        void funA(){
            cout<<"FuncA\n";
        }
    private:
        int b;
        void funB(){
            cout<<"FunB\n";
        }
    protected:
        int c;
        void funC(){
            cout<<"FunC\n";
        }
};

int main(){
    A obj;
    obj.funA();
   // obj.funB();
  //  obj.funC();

    return 0;
}