// deep copy and sallow copy
#include<iostream>
using namespace std;
class room{
    int *l , *b ,*h;
    public:

    room(int x , int y , int z){

        l = new int;
        b = new int;
        h = new int;
        *l = x;
        *b = y;
        *h = z;
    }
    room(room &r){
        l= new int;
        b= new int;
        h= new int;

        *l = *(r.l);
        *b =* (r.b);
        *h = *(r.h);
    }
    void volume(){
        cout<<"Volume:"<< *l* *b* *h<<endl;
        cout<<l<<b<<h;
    }
    void area(){
        cout<<"area:"<<*l* *b<<endl;
        cout<<l<<b;
    }

};
int main(){
    int a , b , c;
    cout<<"Enter the length , breadth and height of room:"<<endl;
    cin>>a>>b>>c;
    room r(a , b , c);
    r.volume();
    r.area();
    room r1(r);
    r1.volume();
    r1.area();
}