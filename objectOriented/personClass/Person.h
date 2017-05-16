#include <iostream>
#include <string>


class Person {
    public:
        void setName();
        void setGender();

    protected:
        std::string name;
        std::string gender;
        std::string identification;
        std::string birthDate;
};
