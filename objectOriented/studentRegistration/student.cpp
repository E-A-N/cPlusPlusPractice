#pragma once
#include "student.h"
class student
{
public:

	student::student() {
		//constructor
		name = "";
		student_id = 0;
	}
	student::student(string n, int s) {
		name = n;
		student_id = s;
	}
	student::~student() {
	}

	void student::add_course(int course) {
		course_id.push_back(course)
	}
};
