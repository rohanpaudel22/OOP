#include<iostream>
using namespace std;
class A{
	public:
	int a;
	
		A(int x){
			a = x;
				cout<<"Parent A class constructor "<<endl;
		}
	
};
class B
{
		public:
	int b;

		B( int y)
		{
			b=y;
			cout<<"parent B class constructor"<<endl;
		}
		
		
		
};
class C : public A , public B
{
	public:
		int c;
		C(int x , int y, int z):  B(y), A(x)
		{
			c=z;
			cout<<"Child class constructor"<<endl;
		}
		void show(){
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
	
};
int main(){
	C c(10 , 20, 30);
	c.show();
}
