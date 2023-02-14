#include<iostream>
using namespace std;

class person{
    char Name[50];
    int id;
    public:
    void setdata(){
        cout<<"Enter name and id of person:"<<endl;
        cin>>Name>>id;
    }
    void display(){
        cout<<"Name:"<<Name<<endl<<"ID:"<<id<<endl;
    }
};
class student: public person{

    string grade;
    char Address[50];

    public:
    void setdata1(){
        setdata();
        cout<<"Enter grade and address of student:"<<endl;
        cin>>grade>>Address;
    }

    void show(){
        display();
        cout<<"Grade:"<<grade<<endl<<"Address:"<<Address<<endl;

    }
};
int main(){
    student s;
    s.setdata1();
    s.show();
}



