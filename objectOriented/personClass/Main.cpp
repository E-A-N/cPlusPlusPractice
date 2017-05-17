#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Worker.h"
using namespace std;
class StudentWorkFactory {
    public:
        static StudentWorker *newStudent(const string &school, const string &job){
            return new StudentWorker(school,job);
        }
};

int main() {

    //Worker* Ean = new Worker();
    //Worker Ean;

    int size = 5;
    string school;
    string job;

    StudentWorker workingStudents[size];
    for(int i = 0; i < size; i++){
        cout << "What\'s the name of the school?: ";
        cin >> school;

        cout << "\nWhat\'s the name of the job?: ";
        cin >> job;

        workingStudents[i] = *newStudent(school, job);
    }

    return 0;
}
