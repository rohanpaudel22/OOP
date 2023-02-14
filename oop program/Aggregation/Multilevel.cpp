#include<iostream>
using namespace std;
class A{
	public:
	int a;
	
		A(int x){
			a = x;
				cout<<"Parent class constructor "<<endl;
		}
	
};
class B: public A
{
		public:
	int b;

		B(int x ,  int y) : A(x)
		{
			b=y;
			cout<<"derived class constructor"<<endl;
		}
		
		
};
class C: public B{
	public:
		int c;
		C(int x , int y , int z): B(x ,y)
		{
			c=z;
			cout<<"Derived C class constructor"<<endl;
		}
		void show(){
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		
};
int main(){
	C c(10 , 20 , 30);
	c.show();
}
