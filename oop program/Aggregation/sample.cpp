#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(){
        a = 10;
    }
    void show(){
        cout<<a<<endl;
    }

};
class B{
    A a1;
    int b;
    public:
    void set(){
        a1.setdata();
        b = 3;

    }
    void display(){
        a1.show();
        cout<<b<<endl;

    }
};
int main(){
    B b;
    b.set();
    b.display();
}