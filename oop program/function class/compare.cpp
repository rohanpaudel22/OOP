#include<iostream>
using namespace std;

class division{
    int a;

    public:
    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a;
    }
    void display(){
        
        
    }
    int operator <(division A){
        if(a<A.a){
            return 1;
        }
        else{
            return 0;
        }
       
    }

};
int  main(){
    division A1 , A2 , A3;
    A1.setdata();
    A2.setdata();
    A3=A1<A2;
    if(A1<A2)
    A3.display();
}