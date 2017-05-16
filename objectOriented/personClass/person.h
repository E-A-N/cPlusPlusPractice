#include <iostream>
#include <string>

//Base class

class Person {
    public:
        void setName(std::string n){
            name = n;
        }

        void setGender(std::)

    protected:
        std::string name;
        std::string gender;
        std::string identification;
        std::string birthDate;

};

class Student: public Person {

    protected:
        std::string school;
}

class Worker: public Person{

    protected:
        std::string company;
};
