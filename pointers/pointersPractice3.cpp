#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>

int passByRef(int arg){
    arg++;
}

int main(){

  int ean, tensue;
  int *phence;
  ean = 29;
  tensue = ean;
  phence = &ean;

  std::cout << &ean << "\n";
  std::cout << ean << std::endl;

  std::cout << "Ean is equal to: "<< *phence << std::endl;
  passByRef(ean);
  passByRef(ean);
  std::cout << "Ean is now equal to: " << *phence << std::endl;

  return 0;

}
