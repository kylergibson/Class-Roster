//
//  roster.h
//  Roster
//
//  Created by Kyle on 9/14/19.
//  Copyright © 2019 Kyle. All rights reserved.
//

#ifndef roster_h
#define roster_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"

using namespace std;

class Roster
{
public:
    void Add(string studentID, string firstName, string lastName, string
             emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree degreeType);
    void Remove(string studentID);
    void PrintAll();
    void PrintDaysInCourse(string studentID);
    void PrintInvalidEmails(); // should include @ sign and a .
    void PrintByDegreeProgram(degree degreeProgram);
    
    
private:
    
};


#endif /* roster_h */
