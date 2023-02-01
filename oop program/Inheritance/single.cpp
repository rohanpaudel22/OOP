#include<iostream>
using namespace std;
class A{ //base class...
   
   
    public:
     int x=0;
     
    void display(){
        cout<<"x="<<x<<endl;
    }

};
class B:public A{ //derived class...
    int y=0;
    public:
    void display(){
        cout<<"x="<<x<<endl<<"y="<<y<<endl;

    }

    
};
int main(){
    B c1;
    c1.display();
}