#include<iostream>
using namespace std;
class room{
    int l , b ,h;
    public:

    // room(){
    //     l = 3;
    //     b = 6;
    //     h = 5;
    // }
    void setdata(){
        cout<<"Enter the length , breadth and height of room:"<<endl;
        cin>>l>>b>>h;
    }

    void volume(){
        cout<<"Volume:"<< l*b*h<<endl;
    }
    void area(){
        cout<<"area:"<<l*b<<endl;
    }

};
int main(){
    room r1 , r2;
    r1.setdata();
    r1.volume();
    r1.area();
    r2.setdata();
    r2.volume();
    r2.area();
}
