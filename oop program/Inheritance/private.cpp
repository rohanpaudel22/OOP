#include <iostream>
using namespace std;
class A
{ // base class....
private:
    int x=46;

protected:
    int y;

public:
    int z;
    void display1(){
        cout<<x<<endl;
    }
    A()
    {
        
        y = 40;
        z = 60;
    }
    void output(){
        cout<<x<<endl;
    }
};
class B :protected A // derived class....
{ 
    int p = 48;

public:
    void display()
    {
        cout<< y << endl
             << z << endl
             << p << endl; //here x cannot be asscess as it data is private in base class A.
             return output(); // and x can be access by returning function.
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
