#include<iostream>
using namespace std;

class rupee{

    int rupees;
    int paisa;
    public:

    void setdata(){

        cout<<"Enter money in rupee and paisa:"<<endl;
        cin>>rupees>>paisa;
    }

    void display(){

        if(paisa>=100){
            int extra = paisa/100;
            rupees += extra;
            paisa -= (extra*100);
        }
        cout<<"sum of money:"<<rupees<<"rs"<<paisa<<"paisa"<<endl;
    }
    void sum(rupee r1 , rupee r2){

        rupees = r1.rupees + r2.rupees;
        paisa = r1.paisa + r2.paisa;
    }

};

int main(){
    rupee r1 , r2 , r3;

    r1.setdata();
    r2.setdata();
    r3.sum(r1 , r2);
    r3.display();
}

// return_type class_name::function_name(args)