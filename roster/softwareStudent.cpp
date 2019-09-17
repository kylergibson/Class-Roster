//SoftwareStudent.cpp

#include "softwareStudent.h"
#include <iostream>
#include <string>



degree SoftwareStudent::GetDegreeType() {
    return degreeProgram;
}

void SoftwareStudent::Print() {
    cout << studentID << ", " << firstName << ", " << lastName << ", " << emailAddress << ", " << age << ", " << daysToCompleteEachCourse[0] << ", " << daysToCompleteEachCourse[1] << ", " << daysToCompleteEachCourse[2] << ", " << "Software" << endl << endl;
}
