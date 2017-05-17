#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

Shape::Shape(){
    cout << "This is a constructor!" << endl;
}

Shape::~Shape(){
    cout << "This is a destructor!" << endl;
}

//virtual
Shape::print(string nameArg){
    cout << nameArg;
}
