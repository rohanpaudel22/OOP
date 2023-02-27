#include<iostream>
using namespace std;
template<class T>

class A{
	
	T a;
	public:
		A(int x){
			a = x;
		}
		void display(){
			
			cout<<"Base data:"<<a<<endl;
		}
};

class B: public A<int>{
	
	int b;
	public:
		B(int x , int y):A<int>(y){
			
			b = x;
		}
		
		void show(){
			
			display();
			cout<<"Derived data:"<<b<<endl;
		}
};

int main(){
	A <int>o1(10);
	o1.display();
	
	B o2(10 , 30);
	o2.show();
}
