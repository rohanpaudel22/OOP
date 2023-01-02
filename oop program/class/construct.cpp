// deep copy and sallow copy
#include<iostream>
using namespace std;
class rectangle {
    int *l , *b;
    public:
    rectangle(int x , int y){
        l = new int;
        b = new int;
        *l = x;
         *b = y;

    }
    rectangle(rectangle &r){
        l = new int;
        b = new int;
        *l =* (r.l);
        *b =* (r.b);
    }

    void area(){
        cout<<"area:"<<*l * *b;
        cout<<l<<endl<<b<<endl;
            }
  };
  int main(){
    int a , b;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>a>>b;
    rectangle r(a , b);
    r.area();

    rectangle r1(r);
    r1. area();
  }

// nasting function

// void setdata(){
//     display;
// }
// void display(){

// }

// void class_name::function_name();