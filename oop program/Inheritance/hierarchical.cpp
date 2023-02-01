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

class B: A
{
    int y;
public:
// void setdata(){
//     y = 67;
// }
void display1(){
    show();

    

}
    

    
};

class C : A 
{
public:
    void display2(){
        show();
        
    }
};

int main()
{
    B d1;
    d1.display1();
    C d2;
    d2.display2();
}