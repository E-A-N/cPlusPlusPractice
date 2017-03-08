#include <iostream>
#include <boost>

class WaterBottle {
    int width,height,weight;
    public:
      WaterBottle(int,int,int);
      //char [100] liquidType;
      int area() {
        return width * height;
      }
      int volume(char liquid[]){
          int radius = width/2;
          int pi = 3.14;
          std::cout << "volume is " << pi*(radius * radius)*height << std::endl;
          std::cout << liquid << std::endl;
          //std::cout << "You\'re %s is",liquid << liquid << "!\n";
      }
};

//Class constructor
WaterBottle::WaterBottle(int wd, int ht, int wt){
    width = wd;
    height = ht;
    weight = wt;
}



int main(){
  
  WaterBottle wata(5,5,5);
  wata.volume("Water");
  std::cout << "Testing what\'s wrong!" << std::endl;
  return 0;
}
