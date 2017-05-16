#include <iostream>
#include <string>
#include <person.h>
//Base class

Person::Person();
void Person::setName(std::string nameArg){
    name = nameArg;
}
void Person::setGender(std::string genderArg){
    gender = genderArg;
}
