#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"Rohan paudel"<<endl;
		}
};
class B:public A{
	public:
		void show(){
			cout<<"Bishwas Baral is topper."<<endl;
		}
};
int main(){
	B b;
	b.show();
	b.A::show();
	
}

