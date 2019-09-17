


//included libraries / own files
#include <iostream>
#include <string>
#include "degree.h"

#ifndef STUDENT_H
#define STUDENT_H

using namespace std;


//Student Class (Letter D.)
class Student {
public:

	//constructor (defaults for new object)
	Student();

	//destructor
	~Student();

	//functions for StudentClass

	//mutators
	void SetStudentID(string x);
	void SetFirstName(string x);
	void SetLastName(string x);
	void SetEmail(string x);
	void SetAge(unsigned int x);
	void SetDaysToCompleteEachCourse(int x, int y, int z);
    void SetDegreeType(degree x);

	//accessors
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmail();
	unsigned int GetAge();
	int GetDaysToCompleteEachCourse(int i);
    virtual degree GetDegreeType() = 0; //pure virtual function

	//print all data
	virtual void Print() = 0;

protected:
	//variables for Student
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	string degreeType;
    int daysToCompleteEachCourse[3];
    
private:
};

#endif


