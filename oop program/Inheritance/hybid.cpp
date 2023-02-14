#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(){
        a =5;
    }
    void display(){
        cout<<a<<endl;
    }

};
class B :virtual public A{
    int b;
    public:
    void set1(){
        b = 8;
    }
    void display(){
        cout<<b<<endl;
        
    }
};
class C:virtual public A{
    int c;
    public:
    void set2(){
        c = 9;

    }
    void display(){
        cout<<c<<endl;
    }
};
class D : public B , public C{
    int d;
    public:
    void set3(){
        setdata();
        set1();
        set2();
        d = 10;
    }
    void show(){
        A::display();
        B::display();
        C::display();
        cout<<d<<endl;

    }

};

int main(){
    D d1;
    d1.set3();
    d1.show();
}
