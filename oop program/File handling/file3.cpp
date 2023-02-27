// .......File1 opening file in Write mode......

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30], email[40];
    fstream iofile;
    iofile.open("file3.doc" , ios::out);

    cout<<"Enter your name and email:"<<endl;
    cin>>name>>email;

    iofile<<name<<endl;
    iofile<<email<<endl;
    iofile.close();
    iofile.open("file3.doc" , ios::in);

    cout<<"Data obtain from file3:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Email:"<<email<<endl;
    iofile.close();

}
