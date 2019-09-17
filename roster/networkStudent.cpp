// NetworkStudent.cpp

#include "networkStudent.h"
#include "roster.h"
#include <iostream>
#include <string>

degree NetworkStudent::GetDegreeType() {
    return degreeProgram;
}
void NetworkStudent::Print() {
    cout << studentID << ", " << firstName << ", " << lastName << ", " << emailAddress << ", " << age << ", " << daysToCompleteEachCourse[0] << ", " << daysToCompleteEachCourse[1] << ", " << daysToCompleteEachCourse[2] << ", " << "Network" << endl << endl;
}
