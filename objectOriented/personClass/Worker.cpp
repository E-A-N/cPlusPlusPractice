#include <string>
#include "Worker.h"

Worker::Worker(){
    init = true;
}

Worker::~Worker(){

}

void Worker::setCompany(std::string c){
    company = c;
}

std::string Worker::getCompany(){
    return company;
}
