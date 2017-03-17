#include <iostream>

float getFahrenheit(float val) {
    return ((val - 32) * 5)/9;
}

float getCelsius(float val) {
    return ((val * 9)/5) + 32;
}

int collectInput(){
      float val;
      std::cout << "Enter the amount of degrees: ";
      std::cin >> val;
      //std::cout << val << std::endl;
      return val;
}

float decision(int value) {
    float choice;
    int degrees = collectInput();
    switch (value) {
        case 1:
            choice = (float)getCelsius(degrees);
            break;
        
        case 2:
            choice = (float)getFahrenheit(degrees);
            break;
    }
    //std::cout << choice << "\n";
    return choice;
}

int main(){
  
    float result;
    int opt;
    
    std::cout << "Enter 1 for Fahrenheit to Celisus\n";
    std::cout << "Enter 2 for Celisius to Fahrenheit\n";
    std::cout << "Enter 0 to Quit\n";
    std::cout << "Menu Choice : ";
    std::cin  >> opt;
    
    if (decision != 0){
        result = decision(opt);
    }

    std::cout << result << std::endl;
    return 0;
}
