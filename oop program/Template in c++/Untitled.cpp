#include<iostream>
using namespace std;
template<class T>

class A{
	
	T a;
	public:
		A(T x){
			a = x;
		}
		void display(){
			
			cout<<"Base data:"<<a<<endl;
		}
};
template<class U , class V>

class B: public A<V>
{
	
	U b;
	public:
		B(U x , V y):A<V>(y){
			
			b = x;
		}
		
		void show(){
			
			A<V>::display();
			cout<<"Derived data:"<<b<<endl;
		}
};

int main(){
	A <int>o1(10);
	o1.display();
	
	B<float , int> o2(10.5, 30.5);
	o2.show();
}
