#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A()
    {
        x = 30;
    }
    void show()
    {
        cout << x << endl;

    }
};

class B
{
    int y;
public:
    B(){
        
       y = 50;

    } 
    void show1(){
        cout<<y<<endl;

    }
};

class C : public B, public A 
{
public:
    void display(){
        show();
        show1();
    }
};

int main()
{
    C d;
    d.display();
}