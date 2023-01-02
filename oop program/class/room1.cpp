// passing by parameter
#include<iostream>
using namespace std;
class room{
    int l , b ,h;
    public:

    room(int x , int y , int z){
        l = x;
        b = y;
        h = z;
    }

    void volume(){
        cout<<"Volume:"<< l*b*h<<endl;
    }
    void area(){
        cout<<"area:"<<l*b<<endl;
    }

};
int main(){
    int a , b , c;
    cout<<"Enter the length , breadth and height of room:"<<endl;
    cin>>a>>b>>c;
    room r(a , b , c);
    r.volume();
    r.area();
}