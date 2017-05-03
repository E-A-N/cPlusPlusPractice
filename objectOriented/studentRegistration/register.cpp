#include "student.h"
#include "course.h"


void findStudentId(int id, std::vector studentList) {
	for (int i = 0; i < studentList.size(); i++) {
		if (id == studentList.size()) {
			std::cout << "Enter the course id to add" << std::endl;
		}
	}
}

void findCourseId(int id, std::vector courseList) {
	for (int i = 0; i < courseList.size(); i++) {
		if (id == courseList[i]) {
			studentList.add_course(id)
		}
	}
}

int main() {
	student one("Student1", 1);
	student two("Student2", 2);
	course courseOne("math", 1);
	course courseTwo("Cis", 2);
	std::vector<student> studentList;
	std::vector<course> courseList;

	studentList.push_back(one);
	studentList.push_back(two);
	courseList.push_back(courseOne);
	courseList.push_back(courseTwo);

	int choice = 0;
	int studentID;
	int courseID;
	while (choice != 4) {
		std::cout << "1. to add course" << std::endl;
		std::cout << "2. to drop" << std::endl;
		std::cout << "3. to print" << std::endl;
		std::cout << "4. to quit" << std::endl;
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "Enter your student id" << std::endl;
			std::cin >> studentID;
			findStudentID(studentID)
            std::cout << "Enter course id" << std::endl;
            std::cin >> courseID;
            add_cource(courseID);
			break;

		case 2:
            std::cout << "Enter your student id" << std::endl;
            std::cin >> studentID;
            findStudentID(studentID)
            std::cout << "Enter course id" << std::endl;
            std::cin >> courseID;
            drop_cource(courseID);
			break;

		case 3:
            std::cout << "Enter your student id" << std::endl;
            std::cin >> studentID;
            findStudentID(studentID)
            std::cout << "Enter course id" << std::endl;
            std::cin >> courseID;
            print(courseID);
			break;
		}
	}
}
