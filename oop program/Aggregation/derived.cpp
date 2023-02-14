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

		B(int x , int y) : A(x)
		{
			b=y;
			cout<<"Child class constructor"<<endl;
		}
		
		void show(){
			cout<<a<<endl<<b<<endl;
		}
		
};
int main(){
	B b(10 , 20);
	b.show();
}
