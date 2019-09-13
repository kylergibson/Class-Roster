// student.cpp

#include "student.h"
#include <iostream>
#include <string>


using namespace std;

//constructor
Student::Student() {
	studentID = "";
	firstName = "Your First Name";
	lastName = "Your Last Name";
	emailAddress = "Your valid email address";
	age = 0;
	degreeType = "Enter in degree type";
	daysToCompleteEachCourse[0] = 0;
	daysToCompleteEachCourse[1] = 0;
	daysToCompleteEachCourse[2] = 0;
}

//mutators
void Student::setStudentID(string x) {
	studentID = x;
}

void Student::setFirstName(string x) {
	firstName = x;
}

void Student::setLastName(string x) {
	lastName = x;
}

void Student::setEmail(string x) {
	emailAddress = x;
}

void Student::setAge(unsigned int x) {
	age = x;
}

void Student::setDaysToCompleteEachCourse(int x, int y, int z) {
	daysToCompleteEachCourse[0] = x;
	daysToCompleteEachCourse[1] = y;
	daysToCompleteEachCourse[2] = z;
}

void Student::setDegreeType(string x) {
	degreeType = x;
}

//accessors
string Student::getStudentID() {
	return studentID;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmail() {
	return emailAddress;
}

unsigned int Student::getAge() {
	return age;
}

int Student::getDaysToCompleteEachCourse() {
	// FIXME: find out how to return all array elements
	return daysToCompleteEachCourse[1,2,3];
}

string Student::getDegreeType() {
	return degreeType;
}
//print all data
void Student::printAllData() {
	cout << studentID << ", " << firstName << ", " << lastName << ", " << emailAddress << ", " << age << ", " << daysToCompleteEachCourse[0] << ", " << daysToCompleteEachCourse[1] << ", " << daysToCompleteEachCourse[2] << ", " << degreeType << endl;
}
