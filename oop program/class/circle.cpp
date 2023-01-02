#include<iostream>
#include<cmath>
#define M_PI;
using namespace std;

class circle{
    private:
    float radius;

    public:
    void getdata(){
        cout<<"Enter the radius of circle:"<<endl;
        cin>>radius;
    }
    float calarea(){
        return 3.14 * pow(radius , 2);
    }
    void display(){
        cout<<"The area of circle is:"<<calarea()<<endl;
    }

};
int main(){
    circle c[3];
    for(int i =0; i<3; i++){
        c[i].getdata();
        c[i].display();
    }
    return 0;
}