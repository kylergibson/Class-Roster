#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

using namespace std;

class SecurityStudent : public Student
{
public:
    degree GetDegreeType();
    void Print();
private:
    degree degreeProgram = security;
};

#endif
