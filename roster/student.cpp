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
	degreeType = software;
	//FIXME: was getting errors when try to give default to all array with daysToCompleteEachCourse[] = {0,0,0}; //also tried 3 instead of it being empty brackets
	daysToCompleteEachCourse[0] = 0;
	daysToCompleteEachCourse[1] = 0;
	daysToCompleteEachCourse[2] = 0;
}

//destructor 
//FIXME: finish method
Student::~Student() {

}

//mutators
void Student::SetStudentID(string x) {
	studentID = x;
}

void Student::SetFirstName(string x) {
	firstName = x;
}

void Student::SetLastName(string x) {
	lastName = x;
}

void Student::SetEmail(string x) {
	emailAddress = x;
}

void Student::SetAge(unsigned int x) {
	age = x;
}

void Student::SetDaysToCompleteEachCourse(int x, int y, int z) {
	daysToCompleteEachCourse[0] = x;
	daysToCompleteEachCourse[1] = y;
	daysToCompleteEachCourse[2] = z;
}

void Student::SetDegreeType(degree x) {
	degreeType = x;
}

//accessors
string Student::GetStudentID() {
	return studentID;
}

string Student::GetFirstName() {
	return firstName;
}

string Student::GetLastName() {
	return lastName;
}

string Student::GetEmail() {
	return emailAddress;
}

unsigned int Student::GetAge() {
	return age;
}
//change to course 1. 2 and then 3, seperate functionsf or them
int Student::GetDaysToCompleteEachCourse(int i) {
	return daysToCompleteEachCourse[i - 1];
}

