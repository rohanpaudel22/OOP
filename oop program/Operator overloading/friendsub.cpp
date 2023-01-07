

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
    friend sub operator -(sub A1 , sub A2);
    

};
sub operator -(sub A1 , sub A2){
        sub A;
        A.a = A1.a-A2.a;
        A.b = A1.b-A2.b;
        return A;
    }
int  main(){
    sub A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1-A2;
    A3.display();
}