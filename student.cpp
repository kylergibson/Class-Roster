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
}


void Student::setStudentID(string x) {
	studentID = x;
}

string Student::getStudentID() {
	return studentID;
}
//First name
void Student::setFirstName(string x) {
	firstName = x;
}
string Student::getFirstName() {
	return firstName;
}
//Last Name
void Student::setLastName(string x) {
	lastName = x;
}
string Student::getLastName() {
	return lastName;
}
//Email Address
void Student::setEmail(string x) {
	emailAddress = x;
}
string Student::getEmail() {
	return emailAddress;
}
//Age
void Student::setAge(unsigned int x) {
	age = x;
}
unsigned int Student::getAge() {
	return age;
}
//Days to complete Each Course
void Student::setDaysToCompleteEachCourse(int x, int y, int z) {
	daysToCompleteEachCourse[0] = x;
	daysToCompleteEachCourse[1] = y;
	daysToCompleteEachCourse[2] = z;
}
int Student::getDaysToCompleteEachCourse() {
	// FIXME: find out how to return all array elements
	return daysToCompleteEachCourse[1,2,3];
}
//degreeType
void Student::setDegreeType(string x) {
	degreeType = x;
}
string Student::getDegreeType() {
	return degreeType;
}
//print all data
void Student::printAllData() {
	cout << studentID << ", " << firstName << ", " << lastName << ", " << emailAddress << ", " << age << ", " << daysToCompleteEachCourse[0] << ", " << daysToCompleteEachCourse[1] << ", " << daysToCompleteEachCourse[2] << ", " << degreeType << endl;
}
