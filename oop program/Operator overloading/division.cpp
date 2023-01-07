#include<iostream>
using namespace std;

class division{
    int a , b;

    public:
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"division:"<<endl;
        cout<<"a_div:"<<a<<endl;
        cout<<"b_div:"<<b<<endl;
    }
    division operator /(division A){
        A.a = a/A.a;
        A.b = b/A.b;
        return A;
    }

};
int  main(){
    division A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1/A2;
    A3.display();
}