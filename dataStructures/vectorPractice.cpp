#include <iostream>
#include <vector>

int main(){
  
    std::vector<int>x;
    x.push_back(5);
    x.push_back(3);
    x.push_back(1);
    x.pop__back();
    
    for (int i = 0; i < x.size(); i++){
        std::cout << x[i] << std::endl;
    }
    
    return 0;
}
