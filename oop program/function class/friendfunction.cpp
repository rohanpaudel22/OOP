

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
    friend add operator +(add A1 , add A2);
    

};
add operator +(add A1 , add A2){
        add A;
        A.a = A1.a+A2.a;
        A.b = A1.b+A2.b;
        return A;
    }
int  main(){
    add A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1+A2;
    A3.display();
}