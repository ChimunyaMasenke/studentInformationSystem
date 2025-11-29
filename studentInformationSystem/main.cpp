//
//  main.cpp
//  studentInformationSystem
//
//  Created by Nchimunya Masenke on 30/11/2025.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//Function prototypes
double calculateCA(double, double);
double calculateSessional(double, double);
bool Status(double);
string Grade(bool, double);

//In order to put the data in a structure before sending it to the array.
struct Courses{
    string courseName;
    string grade;
    
    //Constructor
    Courses(string cName, string cGrade) : courseName(cName), grade(cGrade) {}
};

//Operator overload
ostream& operator<<(ostream& os, const Courses& c){
    os<<c.courseName <<"  " <<c.grade;
    return os;
}

//Mian function
int main(){
    double test1 = 0, test2 = 0, sessional = 0;
    int numOfCourses = 0;
    
    //Declaring a file
    ifstream studentData; //Not yet done!!
    
    //Vector array to hold structured courses details.
    vector<Courses> myCourseList;
    
    cout<<"How many courses are you entering: ";
    cin>>numOfCourses;
    
    //In order to enter multiple courses.
    for(int i = 0; i < numOfCourses; i++){
        //Course details
        string courseName;
        cout<<"Enter course name: ";
        cin.ignore();
        getline(cin, courseName);
        
        //Results details
        cout<<"Enter test1 %: ";
        cin>>test1;
        cout<<"Enter test2 %: ";
        cin>>test2;
        cout<<"Enter sessional %: ";
        cin>>sessional;
        
        //Variables to hold data from functions | Function calls | Passing arguments
        double ca = calculateCA(test1, test2);
        double percentage = calculateSessional(ca, sessional);
        bool status = Status(percentage);
        string studentGrade = Grade(status, percentage);
        
        //Pushing values into the course list array
        myCourseList.push_back(Courses(courseName, studentGrade));
    }
    
    //Reading from the array
    for(const Courses& course : myCourseList){
        cout<<course <<endl;
    }
}

double calculateCA(double t1, double t2){
    double CA = ((t1 + t2)/200)*40;
    return CA;
}

double calculateSessional(double CA, double sessional){
    double sessionalGrade = ((sessional/100)*60) + CA;
    return sessionalGrade;
}

bool Status(double percent){
    bool status = false;
    if(percent >= 50){
        status = true;
    }
    return status;
}

string Grade(bool status, double percentage){
    string grade = "F";
    if(status == true){
        if(percentage > 85){
            grade = "A+";
        }else if(percentage >= 76 && percentage < 84.999){
            grade = "A";
        }else if (percentage >= 68 && percentage < 75.999){
            grade = "B+";
        }else if(percentage >= 62 && percentage < 67.999){
            grade = "B";
        }else if(percentage >= 56 && percentage < 61.999){
            grade = "C+";
        }else if(percentage >= 50 && percentage < 55.999){
            grade = "C";
        }else if(percentage >= 40 && percentage < 49.999){
            grade = "D+";
        }
    }
    return grade;
}
