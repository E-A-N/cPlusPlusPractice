#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>

/*
    So apparently it's impossible to increment an operator via "++" method, but
    C/C++ still allow incrementing via other methods.
*/
void passByRef(int *arg){
    *arg += 11;
}

void arbParams(int *params){

}

int main(){

  int ean, tensue;
  int *phence;
  ean = 29;
  tensue = ean;
  phence = &ean;

  std::cout << phence << "\n";
  std::cout << ean << std::endl;

  std::cout << "Ean is equal to: "<< *phence << std::endl;
  passByRef(phence);
  passByRef(&ean);
  std::cout << "Ean is now equal to: " << *phence << std::endl;

  return 0;
}
