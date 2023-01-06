// .........../*Operator overloading*/..........
// basic to basic,

// postfix operation dummy argument/ prefix ()

// .....................//<<prefix increment>>//..........
#include<iostream>
using namespace std;

class A{
    int count1 , count2;

public:
A()
{
    count1 = 0;
    count2 = 0;

}
void display(){
    cout<<"Count1:"<<count1<<endl<<"Count2:"<<count2<<endl;
}
void operator ++(){
    ++count1;
    ++count2;
}

};
int main(){
    A o1 , o2;
    o1.display();
    ++o1;
    // o1.operator ++()
    o1.display();
    ++o2;
    ++o2;
    o2.display();
}