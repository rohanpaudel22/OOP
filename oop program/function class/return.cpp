// ............////return by value////.................
#include<iostream>
using namespace std;
class complex{

    int r , i;

    public:
    void setdata(){
        cout<<"Enter real and imaginary number:"<<endl;
        cin>>r>>i;
    }
     void display(){
        cout<<"sum:"<<r<<"+"<<i<<"i";
    }
//     complex sum(complex c2){
//         complex temp;
//         temp.i =i +c2.i;
//         temp.r=r+c2.r;
//         return temp;
//     }
// };
// int main(){
//     complex c1 , c2 ,c3;
//     c1.setdata();
//     c2.setdata();
//     c3 = c1.sum(c2);
//     c3.display();

// };  
complex sum( complex c1 , complex c2){
        complex temp;
        temp.i =c1.i +c2.i;
        temp.r=c2.r+c2.r;
        return temp;
    }
};
int main(){
    complex c1 , c2 ,c3 , c4;
    c1.setdata();
    c2.setdata();
    c4 = c3.sum(c1 , c2);
    c4.display();

} 