#include <iostream>
using namespace std;
class operation
{
public:
    int a = 80;
    int b = 5;
};
class add : operation
{
public:
    void display()
    {
        cout << "Sum:" << a + b << endl;
    }
};
class sub : operation
{
public:
    void display1()
    {
        cout << "Sub:" << a - b << endl;
    }
};
class mul : operation
{
public:
    void display2()
    {
        cout << "Product" << a * b << endl;
    }
};
class Div : operation
{
public:
    void display3()
    {
        cout << "Division:" << a / b << endl;
    }
};
class mod : operation
{
public:
    void display4()
    {
        cout << "Mod:" << a % b << endl;
    }
};
int main()
{
    add x;
    x.display();

    sub s;
    s.display1();

    mul m;
    m.display2();

    Div d;
    d.display3();

    mod r;
    r.display4();


}