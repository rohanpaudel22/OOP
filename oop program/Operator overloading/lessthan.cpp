#include<iostream>
using namespace std;

class relation{
    
    public:
    int a;

    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a;
    }
    
    int operator <(relation A){
        if(a<A.a){
            return 1;
        }
        else{
            return 0;
        }
       
    }

};
int  main(){
    relation A1 , A2 ;
    A1.setdata();
    A2.setdata();

    if(A1<A2){
        cout<<"The minimum number is:"<<A1.a<<endl;
    }
    else{
        cout<<"The number is not minimum:"<<A1.a<<endl;
    }
    
    
    

}