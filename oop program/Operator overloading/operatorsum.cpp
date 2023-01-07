#include<iostream>
using namespace std;

class add{
    int a , b;

    public:
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"Sum"<<endl;
        cout<<"a_sum:"<<a<<endl;
        cout<<"b_sum:"<<b<<endl;
    }
    add operator +(add A){
        A.a = a+A.a;
        A.b = b+A.b;
        return A;
    }

};
int  main(){
    add A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1+A2;
    A3.display();
}