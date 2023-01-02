#include<iostream>
#include<string>
using namespace std;
class student{
 int marks;
 int rollno;
 string name;
 int static counter;

public:
student(int x , int y , string z){
    marks = x;
    rollno = y;
    name = z;
    counter++;
    
}
void  display(){
    cout<<"Counter:"<<counter<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Marks:"<<marks<<endl<<endl;
   
}

};
int student::counter = 0;
int main(){
    // student::display();
    student s1(78 , 22 , "Rohan_Paudel");
    student s2(76 , 11 , "Bishwas_Pant");
    student s3(79 , 30 , "Aakash_Shah");
    s1.display();
    s2.display();
    s3.display();
}