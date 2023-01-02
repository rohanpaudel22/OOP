// ................///pass by reference////.........................
#include<iostream>
using namespace std;
class complex{

    int r , i;

    public:
    void setdata(){
        cout<<"Enter real and imaginary number:"<<endl;
        cin>>r>>i;
    }
     void display(){
        cout<<"sum:"<<r<<"+"<<i<<"i";
    }
    void sum(complex &c1 , complex &c2){

        r = c1.r+c2.r;
        i=c1.i+c2.i;
    }
};
int main(){
    complex c1 , c2 ,c3;
    c1.setdata();
    c2.setdata();
    c3.sum(c1 , c2);
    c3.display();

};