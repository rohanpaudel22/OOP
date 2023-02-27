// .......File2 opening file in read mode......

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30], email[40];
    ifstream infile;
    infile.open("file2.doc");


    infile>>name>>email;
    cout<<"Data obtain from file2:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Email:"<<email<<endl;
    infile.close();
}