#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;
    Rectangle(){

        l= 10;
        b = 20;
    }
};
class Triangle
{
public:
    int l;
    int b;
    Triangle(){
        l=10;
        b=20;
    }
    
};
class Area : public Triangle, public Rectangle
{
public:
void display(){
cout<<"Area of Rectangle:"<<Rectangle::l*Rectangle::b<<endl;
cout<<"Area of Triangle:"<<(Triangle::l*Triangle::b)/2<<endl;

}
 
};
int main(){
    Area a1;
    a1.display();
}