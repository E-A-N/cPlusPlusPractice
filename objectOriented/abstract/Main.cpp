#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>
using namespace std;

int main(){

      vector<Shape*>  shape_array;
      Circle c1 = new Circle();
      Rectangle r1 = new Rectangle();

      shape_array.push_back(c1);
      shape_array.push_back(r1);
      shape_array[0].print();
      shape_array[1].print();

      delete shape_array[0];
      delete shape_array[1];


      return 0;
}
