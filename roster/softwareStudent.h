#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"

#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

using namespace std;

class SoftwareStudent : public Student
{
public:
    degree GetDegreeType();
    void Print();
    
private:
    degree degreeProgram = software;
};

#endif
