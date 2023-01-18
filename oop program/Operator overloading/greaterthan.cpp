#include<iostream>
using namespace std;

class relation{
    
    public:
    int a;

    void setdata(){
        cout<<"Enter data:"<<endl;
        cin>>a;
    }
    
    int operator >(relation A){
        if(a>A.a){
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

    if(A1>A2){
        cout<<"The largest number is:"<<A1.a<<endl;
    }
    else{
        cout<<A1.a<<"is not largest number"<<endl;
    }
    
    
    

}