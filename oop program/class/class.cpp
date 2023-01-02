#include <iostream>
using namespace std;

class rectangle
{

public:
    int length;
    int breadth;

    void readdata()
    {
        cout << "Enter the length and breadth:" << endl;
        cin >> length >> breadth;
    }
    void display()
    {
        cout<<"length:"<<length<<endl<<"breadth:"<< breadth << endl;
    }
    void perimeter()
    {
        cout <<"perimeter:"<< 2 * (length + breadth) << endl;
    }
    void area()
    {
        cout <<"area:"<< length * breadth << endl;
    }
};
int main()
{
    // rectangle solution;
    // solution.data();
    // solution.display();
    // solution.perimeter();
    // solution.area();  
int i;
    rectangle r[3];
    for(int i =0; i<3;i++){
        r[i].readdata();
        r[i].display();
        r[i].perimeter();
        r[i].area();

    }



}