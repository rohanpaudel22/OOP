#include<iostream>
using namespace std;

class mul{
    int a , b;

    public:
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"Multiple"<<endl;
        cout<<"a_mul:"<<a<<endl;
        cout<<"b_mul:"<<b<<endl;
    }
    mul operator *(mul A){
        A.a = a*A.a;
        A.b = b*A.b;
        return A;
    }

};
int  main(){
    mul A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1*A2;
    A3.display();
}