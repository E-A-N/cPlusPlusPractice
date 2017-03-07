#include <iostream>
using namespace std;

int lucky = 10;

int main(){

    int *lPtr = &lucky;
    int noPtr = lucky;
    int power = 55;
    int *weapon = &power;
    int *superWeapon = weapon;

    cout << "Lucky value is now: " << *lPtr << "\n";
    cout << "No Pointer is: " << noPtr << "\n";

    lucky = lucky + lucky;

    cout << "Lucky value is now: " << *lPtr << "\n";
    cout << "No Pointer is STILL: " << noPtr << "\n";

    cout << "Weapon strength is: " << *weapon << "\n";
    cout <<  "Super weapon strength is: " << *superWeapon << "\n";

    return 0;
}
