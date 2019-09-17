// SecurityStudent.cpp

#include "securityStudent.h"
#include <iostream>
#include <string>


degree SecurityStudent::GetDegreeType() {
    return degreeProgram;
}

void SecurityStudent::Print() {
    cout << studentID << ", " << firstName << ", " << lastName << ", " << emailAddress << ", " << age << ", " << daysToCompleteEachCourse[0] << ", " << daysToCompleteEachCourse[1] << ", " << daysToCompleteEachCourse[2] << ", " << "Security" << endl << endl;
}
