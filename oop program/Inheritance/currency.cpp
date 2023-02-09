#include <iostream>
using namespace std;

class Dollar {
  int dol;
  int cent;
 public:
  Dollar(int d, int c) {
    dol = d; 
    cent = c;

  } 
  int getDol()
   { 
    return dol;
     }
  int getCent() { 
    return cent;
     }
};

class Rupees {
  int rs;
  int paisa;
 public:
  Rupees(int r, int p){
    rs = r; 
    paisa =p;

  } 

  int getRs() { 
    return rs; 
    }
  int getPaisa() {
     return paisa; 
     }
};

Rupees convert(Dollar d) 
{
  int totalCent = d.getDol() * 100 + d.getCent();
  int totalRs = totalCent * 70 / 100;
  int totalPaisa = totalCent * 70 % 100;
  return Rupees(totalRs, totalPaisa);
}

int main() 
{
  Dollar d(10, 50);
  Rupees r = convert(d);
  cout << r.getRs() << " Rupees and " << r.getPaisa() << " Paisa" <<endl;
  return 0;
}