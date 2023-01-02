#include<iostream>
using namespace std;
class length{
    public:

    int meter;
    int centimeter;

    void setvalue(){

        cout<<"Enter the distances in meter and centimeter:"<<endl;
        cin>>meter>>centimeter;
        }

        void display(){
            cout<<meter<<"m"<<endl;
            cout<<centimeter<<"cm"<<endl;
        }
        void sum(length d1 , length d2){

            meter = d1.meter + d2.meter;
            centimeter = d1.centimeter + d2.centimeter;

        }
};

int main(){
    length d1 , d2 , d3;

    d1.setvalue();
    d2.setvalue();
    d3.sum(d1 , d2);
    d3.display();



    
}



