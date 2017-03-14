#include <iostream>

float getFahrenheit(float val){
    return ((val - 32) * 5)/9;
}

float getCelsius(float val){
    return ((val * 9)/5) + 32;
}

float decision(choice){
    string final;
  
    switch(choice){
      
      case "c":
      case "C":
      case "celsius":
          final = "c";
          break;
          
      case "f":
      case "F":
      case "Fahrenheit":
          final = "f";
          break;
    }
}
int main(){
  
    string choice;
    std::cout << "convert to Fahrenheit or Celsius?\nenter f or c, q to exit: ";

    
    deg = getFahrenheit(deg);
    std::cout << deg << std::endl;
    
    return 0;
}
