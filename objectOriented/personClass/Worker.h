#include <string>
#include "Person.h"

class Worker: virtual public Person{
    public:
        Worker();
        ~Worker();
        void setCompany(std::string c);
        std::string getCompany();
    private:
        std::string company;
        bool init;
};
