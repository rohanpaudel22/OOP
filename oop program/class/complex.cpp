#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
    void setvalue()
    {
        cout<<"Enter the real and imaginary part of complex number:"<<endl;
        cin >>real>>imag;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    void sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setvalue();
    c2.setvalue();
    c3.sum(c1, c2);
    c3.display();
    // cout << "Enter real and imaginary part of first complex number" << endl;
    // cout << "Enter real and imaginary part of second complex number" << endl;
    // cout << "Sum of two complex numbers is" << endl;
    return 0;
}