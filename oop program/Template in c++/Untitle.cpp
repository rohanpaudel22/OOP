#include<iostream>
using namespace std;
template<class T>

class A{
	
      int a;
	public:
		A(int x){
			a = x;
		}
		void display(){
			
			cout<<"Base data:"<<a<<endl;
		}
};
template<class U>

class B: public A<U>
{
	U b;
	public:
		B(U x , int y):A<U>(y)
		{
			
			b = x;
		}
		
		void show(){
			
			A<U>::display();
			cout<<"Derived data:"<<b<<endl;
		}
};

int main(){
	A<int>o1(10);
	o1.display();
	
	B<float> o2(10.5, 30.5);
	o2.show();
}
