#include<iostream>
using namespace std;

int main(){

    int a , b;
    cout<<"Enter any two no:"<<endl;
    cin>>a>>b;

    try{

        if(b==0)
        throw b;

        else if(b<0)
        throw 'c';

        else
        cout<<"result:"<<a/b<<endl;

    }

    catch(int i){
        cout<<"Exception!!"<<i<<endl;
    }

    catch(char j){
        cout<<"Exception!!"<<j<<endl;
    }

    return 0;
}