//
//  Header.h
//  studentInformationSystem
//
//  Created by Nchimunya Masenke on 03/04/2026.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

//Function prototypes
double calculateCA(double, double);
double calculateSessional(double, double);
string Grade(double);
void schools();
void programs(int);
void SICT();
void Beng();
void SOB();
void IO();

//In order to put the data in a structure before sending it to the array.
struct Courses{
    string courseName;
    string grade;
    
    //Constructor
    Courses(string cName, string cGrade) : courseName(cName), grade(cGrade) {}
};

//Declaring a file
extern ifstream studentData; //Not yet done!!

//Vector array to hold structured courses details.
extern vector<Courses> myCourseList;

#endif /* Header_h */
