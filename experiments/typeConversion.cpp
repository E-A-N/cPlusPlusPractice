#include <iostream>
#include <typeinfo>

int main(){

    const int testy = 99;
    int uno = 1;
    double dos = 2.00;

    double nuno = (double) uno;
    //bool unoIsInt = typeid(uno).name() == 'i';

    std::cout << "Uno's value is: " << uno << std::endl;
    std::cout << "Uno is type: " << typeid(uno).name() << std::endl;
    //std::cout << "Is uno an int?: " << unoIsInt << std::endl;

    std::cout << "Dos's value is: " << dos << std::endl;
    std::cout << "Uno is type: " << typeid(dos).name() << std::endl;



    return 0;
}
