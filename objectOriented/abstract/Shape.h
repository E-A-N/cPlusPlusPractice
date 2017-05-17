#include <iostream>
#include <string>
#ifndef SHAPE
#define SHAPE

class Shape{
    std::string name;
    virtual void print(std::string nameArg);
};


#endif /* SHAPE */
