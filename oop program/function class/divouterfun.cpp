#include<iostream>
using namespace std;

class Div{
    
    public:
    int a , b;
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"Division"<<endl;
        cout<<"a_div:"<<a<<endl;
        cout<<"b_div:"<<b<<endl;
    }
    
// friend Div operator /(Div A1 , Div A2);
};
Div operator /(Div A1 , Div A2){
    Div A;
        A.a = A1.a/A2.a;
        A.b = A1.b/A2.b;
        return A;
    }
int  main(){
    Div A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1/A2;
    A3.display();
}