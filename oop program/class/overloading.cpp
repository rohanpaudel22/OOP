// Construction overloading

#include<iostream>
using namespace std;
class rectangle{
    int l , b;

    public:
    rectangle(){
        l=3;
        b=2;
    }
    rectangle(int x , int y){
        l=x;
        b=y;
    }
    void area(){
        cout<<"Area:"<<l*b<<endl;
    }
};
int main(){
    rectangle r;
    rectangle r1(5, 6);
    r.area();
    r1.area();
}