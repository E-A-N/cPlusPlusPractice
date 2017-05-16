#include <iostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H


class Person {
    public:
        Person();
        ~Person();
        void setName();
        void setGender();

    protected:
        std::string name;
        std::string gender;
        std::string identification;
        std::string birthDate;
};

#endif /* PERSON_H */
