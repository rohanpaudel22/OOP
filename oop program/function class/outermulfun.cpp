#include<iostream>
using namespace std;

class mul{
    

    public:
    int a , b;
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"Multiple"<<endl;
        cout<<"a_mul:"<<a<<endl;
        cout<<"b_mul:"<<b<<endl;
    }
    
// friend mul operator *(mul A1 , mul A2);
};
mul operator *(mul A1 , mul A2){
    mul A;
        A.a = A1.a*A2.a;
        A.b = A1.b*A2.b;
        return A;
    }
int  main(){
    mul A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1*A2;
    A3.display();
}