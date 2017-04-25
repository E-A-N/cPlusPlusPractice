#pragma once
#include <string>
#include <iostream>
#include <vector>

class student {
  public:
    student();
    ~student();
    void add_cource(int course);
    void drop_course(int course);
    void print();
  private:
    std::string name;
    int student_id=0;
    std::vector<int>course_id;
};
