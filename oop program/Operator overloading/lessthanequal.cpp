#include<iostream>
using namespace std;
class less_than_Equal{
    private:
    int data;
    public:
    less_than_Equal(int d){
        data = d;
    }
    int get_data(){
        return data;
    }
    int operator <=(less_than_Equal d){
        if(data<=d.data){
            return 1;
        }
        else{
            return 0;
        }
    }


};
int main(){
    less_than_Equal d1(800) , d2(250);
    cout<<"Data present in your object:"<<endl;
    cout<<"d1 data:"<<d1.get_data()<<endl;
    cout<<"d2 data:"<<d2.get_data()<<endl;
    if(d1<=d2){
        cout<<"d1 object is less or equal to d2"<<endl;

    }
    else{
        cout<<"d1 object is not less or equal to d2"<<endl;

    }
    return 0;
}