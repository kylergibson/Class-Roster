//
//  roster.cpp
//  Roster
//
//  Created by Kyle on 9/14/19.
//  Copyright © 2019 Kyle. All rights reserved.
//

#include "roster.h"



#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

 vector<Student*> classRosterArray;

//global variables
string studentIDLocal;
string firstNameLocal;
string lastNameLocal;
string emailLocal;
int ageLocal;
int daysInCourseLocal[3];
string degreeTypeLocal;
degree degreeTypeDegree;

//function prototypes
string commaToSpace(string text);
void parseString(string tempString);
void addCurrentStudents();
void addSoftwareStudent();
void addSecurityStudent();
void addNetworkStudent();
void getDataFromClassArray(int i);

// FIXME: class functions protoype?

void Roster::Add(string studentID, string firstName, string lastName, string
         emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree degreeType) {
    if (degreeType == software) {
        
        addSoftwareStudent();
        
    } else if (degreeType == security) {
       
        addSecurityStudent();
        
    } else if (degreeType == network) {
        
        addNetworkStudent();
        
    } else {
        cout << "Error occured adding student" << endl;
    }
}

void Roster::Remove(string studentID) {
    for (int i = 0; i < classRosterArray.size(); ++i) {
        if (classRosterArray.at(i)->GetStudentID() == studentID) {
            classRosterArray.erase(classRosterArray.begin() + i);
            cout << "Student " << studentID << " found" << endl;
            break; //exits function once student is found.
            
        } else if (i == classRosterArray.size() - 1) {
            cout << "Student with " << studentID << " not found" << endl;
        }
    }
}

void Roster::PrintAll() {
    for (int i = 0; i < classRosterArray.size(); ++i) {
        getDataFromClassArray(i+1);
        cout << studentIDLocal << "\tFirst Name: " << firstNameLocal << "\tLast Name: " << lastNameLocal << "\tEmail: " << emailLocal << "\tAge: " << ageLocal << "\tDays in course: {" << daysInCourseLocal[0] << "," << daysInCourseLocal[1] << "," << daysInCourseLocal[2] << "}" << "\tDegree Program: " << degreeTypeLocal << endl;
    }
    cout << endl;
}

void Roster::PrintDaysInCourse(string studentID) {
    for (int i = 0; i < classRosterArray.size(); ++i) {
        getDataFromClassArray(i+1);
        if (studentIDLocal == studentID) {
            int studentAvg;
            studentAvg = ( daysInCourseLocal[0] + daysInCourseLocal[1] + daysInCourseLocal[2] ) / 3;
            cout << "Average days in course: " << studentAvg << endl;
            break; //exits function
        } else if (i == classRosterArray.size() - 1) {
            cout << "Student not found" << endl;
        }
    }
}

void Roster::PrintInvalidEmails() {
    cout << "Printing invalid emails: " << endl;
    for (int i = 0; i < classRosterArray.size(); ++i) {
        getDataFromClassArray(i + 1);
        
        size_t at = emailLocal.find("@");
        size_t period = emailLocal.find(".");
        size_t space = emailLocal.find(" ");
        
        if (space != string::npos || at == string::npos || period == string::npos ) {
        cout << emailLocal << endl;
        }
        
    }
    cout << endl;
}

void Roster::PrintByDegreeProgram(degree degreeProgram) {
    
    for (int i = 0; i < classRosterArray.size(); ++i) {
        getDataFromClassArray(i + 1);
        
        if (degreeProgram == degreeTypeDegree) {
            classRosterArray.at(i)->Print();
        }
    }
}


//function prototypes
string commaToSpace(string text);
void parseString(string tempString);
void addCurrentStudents();

//student data string
const string studentData[] =
{"A1, John, Smith, John1989@gmail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Kyle,Gibson,kgibs87@wgu.edu,23,30,30,40,SOFTWARE"};



    int main() {
        cout << "Scripting and Programming Applications - 867, " << "C++ was used to create this program, " << "Student ID: #001198452, " << "Kyle Gibson" << endl << endl;
        
        addCurrentStudents();
        Roster classRoster;
        
        classRoster.PrintAll();
        classRoster.PrintInvalidEmails();
        
        //loops through classRosterArray to get average days in class for each student
        for (int i = 0; i < classRosterArray.size(); ++i) {
            classRoster.PrintDaysInCourse(classRosterArray.at(i)->GetStudentID());
        }
        cout << endl;
        
        classRoster.PrintByDegreeProgram(software);
        classRoster.Remove("A3");
        classRoster.Remove("A3");
        
        
        cout << endl;
        
        //destructor call
        classRoster.~Roster();
        
        return 0;
}



//function instructions

//replaces commas with a space to be able to parse easier.
string commaToSpace(string textString) {
    for (int i = 0; i < textString.length(); ++i) {
        if(textString[i] == ',') {
            textString[i] = ' ';
        }
    }
    return textString;
}

void parseString(string tempString) {
        istringstream inSS(tempString);
    inSS >> studentIDLocal >> firstNameLocal >> lastNameLocal >> emailLocal >> ageLocal >> daysInCourseLocal[0] >> daysInCourseLocal[1] >> daysInCourseLocal[2] >> degreeTypeLocal;
    }

void addSoftwareStudent() {
    SoftwareStudent* softwareStudentPtr = nullptr;
    softwareStudentPtr = new SoftwareStudent;
    
    //All setters/mutators for object
    softwareStudentPtr->SetStudentID(studentIDLocal);
    softwareStudentPtr->SetFirstName(firstNameLocal);
    softwareStudentPtr->SetLastName(lastNameLocal);
    softwareStudentPtr->SetEmail(emailLocal);
    softwareStudentPtr->SetAge(ageLocal);
    softwareStudentPtr->SetDaysToCompleteEachCourse(daysInCourseLocal[0], daysInCourseLocal[1], daysInCourseLocal[2]);
    softwareStudentPtr->SetDegreeType(software);
    
    //add object to vector
    classRosterArray.push_back(softwareStudentPtr);
}

void addSecurityStudent() {
    //create new object
    SecurityStudent* securityStudentPtr = nullptr;
    securityStudentPtr = new SecurityStudent;
    
    //All setters/mutators for object
    securityStudentPtr->SetStudentID(studentIDLocal);
    securityStudentPtr->SetFirstName(firstNameLocal);
    securityStudentPtr->SetLastName(lastNameLocal);
    securityStudentPtr->SetEmail(emailLocal);
    securityStudentPtr->SetAge(ageLocal);
    securityStudentPtr->SetDaysToCompleteEachCourse(daysInCourseLocal[0], daysInCourseLocal[1], daysInCourseLocal[2]);
    securityStudentPtr->SetDegreeType(security);
    
    //add object to vector
    classRosterArray.push_back(securityStudentPtr);
}

void addNetworkStudent() {
    //create new object
    NetworkStudent* networkStudentPtr = nullptr;
    networkStudentPtr = new NetworkStudent;
    
    //All setters/mutators for object
    networkStudentPtr->SetStudentID(studentIDLocal);
    networkStudentPtr->SetFirstName(firstNameLocal);
    networkStudentPtr->SetLastName(lastNameLocal);
    networkStudentPtr->SetEmail(emailLocal);
    networkStudentPtr->SetAge(ageLocal);
    networkStudentPtr->SetDaysToCompleteEachCourse(daysInCourseLocal[0], daysInCourseLocal[1], daysInCourseLocal[2]);
    networkStudentPtr->SetDegreeType(security);
    
    //add object to vector
    classRosterArray.push_back(networkStudentPtr);
}

void addCurrentStudents() {
    for (int i = 0; i < 5; ++i) {
        
        string spacedString = commaToSpace(studentData[i]); //makes spacedString have no commas
        parseString(spacedString);
        
        //if statement to create object based off of degree type and add to classRosterArray
        if (degreeTypeLocal == "software" || degreeTypeLocal == "SOFTWARE") {
            
            addSoftwareStudent();
            
        } else if (degreeTypeLocal == "security" || degreeTypeLocal == "SECURITY") {
            
            addSecurityStudent();
            if (emailLocal == "John1989@gmail.com") {
                classRosterArray.at(i)->SetEmail("John1989@gm ail.com");
            }
            
        } else if (degreeTypeLocal == "network" || degreeTypeLocal == "NETWORK") {
            
            addNetworkStudent();
            
        } else {
            cout << "ERROR OCCURRED" << endl;
        }
    }
}



void getDataFromClassArray(int i) {
   
        studentIDLocal = classRosterArray.at(i-1)->GetStudentID();
        firstNameLocal = classRosterArray.at(i-1)->GetFirstName();
        lastNameLocal = classRosterArray.at(i-1)->GetLastName();
        emailLocal = classRosterArray.at(i-1)->GetEmail();
        ageLocal = classRosterArray.at(i-1)->GetAge();
        daysInCourseLocal[0] = classRosterArray.at(i-1)->GetDaysToCompleteEachCourse(1);
        daysInCourseLocal[1] = classRosterArray.at(i-1)->GetDaysToCompleteEachCourse(2);
        daysInCourseLocal[2] = classRosterArray.at(i-1)->GetDaysToCompleteEachCourse(3);
        degreeTypeDegree = classRosterArray.at(i-1)->GetDegreeType();
}
