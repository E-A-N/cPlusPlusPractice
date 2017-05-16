#include <string>
#include "Person.h"

class Worker: public Person{
    public:
        void setCompany();
        string getCompany();
    protected:
        std::string company;
};
