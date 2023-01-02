#include<iostream>
using namespace std;

class length{

    public:

    int feet;
    int inches;

    void setdata(){
        cout<<"Enter distance in feet and inches:"<<endl;
        cin>>feet>>inches;
    }
    void display(){
        if(inches>=12){
            int extra = inches/12;
            feet += extra;
            inches -= (extra*12);
        }
        cout<<"The sum of distance:"<<feet<<"ft"<<inches<<"inch"<<endl;
    }
    void sum(length l1 , length l2){
        feet = l1.feet + l2.feet;
        inches = l1.inches + l2. inches;
    }

};

int main(){
    length l1 , l2 , l3;

    l1.setdata();
    l2.setdata();
    l3.sum(l1 , l2);
    l3.display();
}