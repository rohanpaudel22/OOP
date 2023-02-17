#include <iostream>
using namespace std;

class A
{

public:
    int a;
    int b;
    string s;

    void setdata()
    {
        cout << "Enter any two no:" << endl;
        cin >> a >> b;
    }

    void divide()
    {

        try
        {
            if (b == 0){
                throw b;

            }
            else if (b < 0){
                A o1;
                o1.s ="Hello World!!...code is wrong..";
               throw o1;

            }
            else
            {
                cout << "Result:" << (float)a / b;
            }
        }
        catch (int i)
        {
            cout << "Exception!!" << i << endl;
        }
        catch (A o)
        {
            cout << "Exception!!!" << o.s << endl;
        }
    }
};
int main()
{
    A o;
    o.setdata();
    o.divide();
}