#include <iostream>
#include <math.h>
using namespace std;

int main(){
  
    float num = 0.567876;
    num = (9.5*4.5 - 2.5*3)/(45.5-3.5);
    float rnd = num;
    num = round(num * 100000) /100000;
    
    cout << rnd << "\n";
    cout << num << "\n";
  
    return 0;
}
