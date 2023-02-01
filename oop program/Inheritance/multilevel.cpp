#include<iostream>
using namespace std;

class A{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    A(){
        x = 30;
        y = 40;
        z = 60;

    }
    void show(){
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
};
class B : A{
   int p ;
   public:
    void setdata(){
        p = 45;
    }
    void display(){
        show();
        cout<<p<<endl;
        
    }

};
class C: B{
     int q ;
   public:
    void setdata1(){
        q = 15;
    }
    void display1(){
        setdata();
        display();
        cout<<q<<endl;
    }


};
int main(){
    B d;
    d.setdata();
    d.display();
    
    C d1;
    d1.setdata1();
    d1.display1();
}
