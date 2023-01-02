#include<iostream>
using namespace std;

class integer{

    private:
    int m ;
    int n;
    public:
    
    integer(int x , int y){
        m = x;
        n = y;
        
    }
    void sum(){
        cout<<"sum of integers is:"<<m+n<<endl;
    }

};
int main(){
    int a , b;
    cout<<"Enter any two integer:"<<endl;
    cin>>a>>b;

    integer i(a , b);
    i.sum();
}
