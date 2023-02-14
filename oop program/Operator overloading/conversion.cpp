#include<iostream>
using namespace std;
class currency{
    private:
    int rs;
    int paisa;

    public:
    currency(float c){
        rs = int(c);
        paisa = 100*(c-rs);
    }
    void display(){
        cout<<"Rs:"<<rs<<endl<<"Paisa:"<<paisa<<endl;
    }

};
int main(){
    float f= 100.25;
    currency c1 = f;
    c1.display();
    return 0;
}