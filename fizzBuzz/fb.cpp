#include <iostream>
#include <cstring>
using namespace std;

void fizzBuzz(char fizz[], char buzz[], int num) {
    char fizzBuzz[strlen(fizz) + strlen(buzz)];
    strcat(fizzBuzz,fizz);
    strcat(fizzBuzz,buzz);

    for(int i = 0; i < num; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                cout << fizzBuzz << "\n";
            }
            else{
                cout << fizz << "\n";
            }
        }
        else if (i % 5 == 0) {
            cout << buzz << "\n";
        }
        else {
            cout << i << "\n";
        }
    }
}

int main(){
    char fi[5] = "fizz";
    char bu[5] = "buzz";

    cout << "Fizz is : " << fi << "\n";
    cout << "Buss length + 3 is: " << strlen(bu) + 3 << "\n";
    fizzBuzz(fi,bu,100);
    return 0;
}
