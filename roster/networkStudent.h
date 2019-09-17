
//includes libraries and own files
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"


#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

using namespace std;

class NetworkStudent : public Student
{
public:
    degree GetDegreeType();
    void Print();
private:
    degree degreeProgram = network;
};

#endif
