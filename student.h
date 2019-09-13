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
	//functions for StudentClass

	//Student ID
	void setStudentID(string x);
	string getStudentID();
	//First name
	void setFirstName(string x);
	string getFirstName();
	//Last Name
	void setLastName(string x);
	string getLastName();
	//Email Address
	void setEmail(string x);
	string getEmail();
	//Age
	void setAge(unsigned int x);
	unsigned int getAge();
	//Days to complete Each Course
	void setDaysToCompleteEachCourse(int x, int y, int z);
	int getDaysToCompleteEachCourse();
	//degreeType
	void setDegreeType(string x);
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


