#include<iostream>
using namespace std;
class Box{
public:
int l , b , h;
Box(int x , int y , int z){
l=x;
b=y;
h=z;
}

~Box(){
    cout<<"Deallocation!!";
}
void volume(){
    cout<<"Volume:"<<l*b*h<<endl;
}
};
int main(){
    Box *b1= new Box(5 , 2, 1);
    b1 -> volume();
    delete b1;
}