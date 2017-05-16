#include <string>
#include "Person.h"

class Worker: public Person{
    public:
        Worker();
        ~Worker();
        void setCompany();
        std::string getCompany();
    protected:
        std::string company;
        bool init;
};
