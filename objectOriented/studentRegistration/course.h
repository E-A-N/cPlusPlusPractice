#pragma once
#include <string>
#include <iostream>
#include <vector>

class course {
  public:
    course();
    ~course();
    void add_cource(int course);
    void drop_course(int course);
    void print();
  private:
    std::string name;
    int course_id=0;
    std::vector<int>course_id;
};
