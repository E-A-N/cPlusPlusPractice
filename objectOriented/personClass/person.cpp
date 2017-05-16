#include <iostream>
#include <string>
#include <person.h>
//Base class

void person::setName(std::string n){
    name = n;
}
void person::setGender(std::string g){
    gender = g;
}

class Student: public Person {

    protected:
        std::string school;
}

class Worker: public Person{

    protected:
        std::string company;
};
