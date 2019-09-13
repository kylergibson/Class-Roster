#include <iostream>
#include <string>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;


//Student Class (Letter D.)
class Student {
public:

	//constructor (defaults for new object)
	Student();

	//deconstructor
	~Student();

	//functions for StudentClass

	//mutators
	void setStudentID(string x);
	void setFirstName(string x);
	void setLastName(string x);
	void setEmail(string x);
	void setAge(unsigned int x);
	void setDaysToCompleteEachCourse(int x, int y, int z);
	void setDegreeType(string x);

	//accessors
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	unsigned int getAge();
	int getDaysToCompleteEachCourse();
	string getDegreeType();

	//print all data
	void printAllData();

private:
	//variables for Student
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToCompleteEachCourse[3];
	string degreeType;
};

#endif


