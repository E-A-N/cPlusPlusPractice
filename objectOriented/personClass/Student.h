#include <iostream>
#include <string>
#include "Person.h"

class Student: virtual public Person {
    public:
        void setSchool();
        std::string getSchool();

    protected:
        std::string school;
};
