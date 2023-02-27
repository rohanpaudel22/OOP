// .......File1 opening file in Write mode......

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30], email[40];
    ofstream outfile;
    outfile.open("file1.doc");

    cout<<"Enter your name and email:"<<endl;
    cin>>name>>email;

    outfile<<name<<endl;
    outfile<<email<<endl;
    cout<<"Done.";
    outfile.close();
}