#include <iostream>
using namespace std;
class A
{ // base class....
private:
    int x;

protected:
    int y;

public:
    int z;
    A()
    {
        x = 10;
        y = 40;
        z = 60;
    }
};
class B :protected A // derived class....
{ 
    int p = 48;

public:
    void display()
    {
        cout << y << endl
             << z << endl
             << p << endl; //here x is not access as it is private in base class A.
    }
};
class C : B
{ // derived class of B class.....
    int q = 34;

public:
    void show()
    {
        cout << q << endl
             << y << endl
             << z << endl; // in class B all the data menber become privtate so it couldnot be accessed.
             //and if we make class B protected then we can excess the data menber of B in class C.
    }
};
int main()
{
    B d;
    d.display();
    C d1;
    d1.show();
}
