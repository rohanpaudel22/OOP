#include<iostream>
using namespace std;

class A{

    public:
     virtual void display(){
        cout<<"Base class"<<endl;
    }

};
class B: public A{
    public:
     void display(){A
        cout<<"Derived class."<<endl;    }
};
int main(){
    A *p;
    A a1;
    B b1;
    p = &a1;
    p-> display();
    p = &b1;
    p->display();
}