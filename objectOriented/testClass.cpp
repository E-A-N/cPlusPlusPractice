#include <iostream>

class WaterBottle {
    int width,height,weight;
    public:
      WaterBottle(int,int,int);
      //char [100] liquidType;
      int area;
      int setArea(int w, int h) {
        return w * h;
      }
      int volume(char liquid[]){
          int radius = width/2;
          int pi = 3.14;
          std::cout << "volume is " << pi*(radius * radius)*height
          << " units of " << liquid
          << std::endl;
          std::cout << liquid << std::endl;
          //std::cout << "You\'re %s is",liquid << liquid << "!\n";
      }
};

//Class constructor
WaterBottle::WaterBottle(int wd, int ht, int wt){
    width = wd;
    height = ht;
    weight = wt;
    area = setArea(wd,ht);
}
/*
WaterBottle::WaterBottle(){
    width  = 15;
    height = 25;
    weight = 20;
}
*/

int main(){

  WaterBottle wata(5,5,5);
  WaterBottle oil(9,19,29);
  wata.volume("Water");
  oil.volume("Oil");

  std::cout << oil.area << std::endl;

  return 0;
}
