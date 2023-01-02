#include<iostream>
using namespace std;
class time{

    public:

    int hour;
    int minutes;

    void setdata(){

        cout<<"Enter time in hour and minutes:"<<endl;
        cin>>hour>>minutes;

    }
    void display(){
        if(minutes>=60){

            int extra = minutes/60;
            hour += extra;
            minutes -= (extra*60);
        }
        cout<<"The sum of time :"<<hour<<"hr"<<minutes<<"min";
        }

        void sum(time t1 , time t2){
            
            hour = t1.hour + t2.hour;
            minutes = t1.minutes + t2.minutes;
        }
    

};

int main(){
    time t1 , t2 , t3;

    t1.setdata();
    t2.setdata();
    t3.sum(t1 , t2);
    t3.display();
}