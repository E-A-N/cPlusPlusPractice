#include <iostream>
#include <assert.h>
#define FAH(x)(((x - 32) * 5)/9)
#define CEL(x)(((x * 9)/5) + 32)

int tempConvert(int num, int degrees){
    int result;
  
    switch(num){
      case 1:
          result = FAH(degrees);
          assert(CEL(result) > -273);
          break;
          
      case 2:
          result = CEL(degrees);
          assert(result > -273);
          break;
    }
    return result;
}

void choice(int opt){
  
    switch(opt){
      
        case 0:
        std::cout << "Exiting Program..." << std::endl;
        break;
      
        case 1:
        std::cout << "You chose Fahrenheit." << std::endl;
        break;
        
        case 2:
        std::cout << "You chose Celcius." << std::endl;
        break;
      
    }
  
}

int main(){
  
  int opt = 1;
  int temp = 32;
  int degrees;
  int value;
  
  while (opt != 0){
    
      std::cout << "Convert to Celcius or Fahrenheit?";
      std::cout << "\nOr enter zero to quit.\n-> ";
      std::cin >> opt;
      choice(opt);
      if (opt == 0) break;
      std::cout << "Enter number of degrees.\n->";
      std::cin >> degrees;
      value = (float)tempConvert(opt,degrees);
      
      std::cout << (float)value << std::endl;
  }

  return 0;
}
