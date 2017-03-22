#include <iostream>

int exponent(int root, int rep, int sum = 0){
  sum = sum == 0 ? root : sum;
  if (rep > 1){
    return exponent(root,rep -1, sum * root);
  }
}


int main(){
  
  int num;
  int expo;
  int result;
  std::cout << "Choose a number: ";
  std::cin >> num;
  std::cout << "\nChoose an exponent: ";
  std::cin >> expo;
  result = exponent(num,expo);
  std::cout << "\n" << result << std::endl;
  return 0;
}
