#include<iostream>
using namespace std;
template<class T>
class A{
	
	T a , b;
	
	public:
		A(T x , T y){
			a = x;
			b = y;
		}
	

T Max(){
	
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
};

int main()
{
	
	A <int>o1(10 , 50);
	cout<<"Max(int):"<<o1.Max()<<endl;
	A <float>o2(2.5 , 7.5);
	 cout<<"Max(float):"<<o2.Max()<<endl;
	 
	 A <char>o3('a' , 'h');
	 cout<<"Max(char):"<<o3.Max()<<endl;
}
