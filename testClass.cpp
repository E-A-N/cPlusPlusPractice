#include <iostream>

class WaterBottle {
    int width,height,weight;
    public:
      WaterBottle(int,int,int);
      //char [100] liquidType;
      int area() {
        return width * height;
      }
      int volume(){
          int radius = width/2;
          int pi = 3.14;
        return pi*(radius * radius)*height;
      }
};

//overload function with no parameters
//this is alternative to default parameters
WaterBottle::WaterBottle(){
    width = 7;
    height = 7;
    weight = 7;
}

//Class constructor
WaterBottle::WaterBottle(int wd, int ht, int wt){
    width = wd;
    height = ht;
    weight = wt;
}

int main(){
  
  cout << "Testing what\'s wrong!" << endl;
  return 0;
}
