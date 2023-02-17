#include<iostream>
using namespace std;

void divide(int a , int b){
        if(b==0)
        throw b;

        else
        cout<<"result:"<<a/b<<endl;

    }
int main(){

    int x , y;
    cout<<"Enter any two no:"<<endl;
    cin>>x>>y;
    try{
    divide(x , y);

    }

    catch(int i){
        cout<<"Expectation!!"<<i<<endl;
    }
    return 0;
}