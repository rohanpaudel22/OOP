#include<iostream>
using namespace std;

class sub{
    int a , b;

    public:
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"Sub"<<endl;
        cout<<"a_sub:"<<a<<endl;
        cout<<"b_sub:"<<b<<endl;
    }
    sub operator -(sub A){
        A.a = a-A.a;
        A.b = b-A.b;
        return A;
    }

};
int  main(){
    sub A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1-A2;
    A3.display();
}