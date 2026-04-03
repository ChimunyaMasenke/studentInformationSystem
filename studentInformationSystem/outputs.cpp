#include "Header.h"

string Grade(double percentage){
    if(percentage > 85) return "A+";
    else if(percentage >= 76 && percentage < 84.999) return "A";
    else if (percentage >= 68 && percentage < 75.999) return "B+";
    else if(percentage >= 62 && percentage < 67.999) return "B";
    else if(percentage >= 56 && percentage < 61.999) return "C+";
    else if(percentage >= 50 && percentage < 55.999) return "C";
    else if(percentage >= 40 && percentage < 49.999) return "D+";
    return "F";
}

void schools(){
    short option = 0;
    cout<<"Choose school.\n1. School of Information Communications Technology (SICT)\n2. School of Business (SOB)\n3. School of Engineering (Beng EE)\nEnter option: ";
    cin>>option;
    
    switch(option){
        case 1: cout<<"---SICT---\n";
            programs(option);
            break;
        case 2: cout<<"---SOB---\n";
            programs(option); //TODO
            break;
        case 3: cout<<"---Beng---\n";
            programs(option); //TODO
            break;
        default: cout<<"Invalid option! \n";
    }
    
}

void programs(int opt){
    switch(opt){
        case 1: SICT();
            break;
        case 2: //SOB(); //TODO
            break;
        case 3: //Beng(); //TODO
            break;
        default: cerr<<"Invalid input! ";
            break;
    }
}

void IO(){
    double test1 = 0, test2 = 0, sessional = 0;
    int count = 0;
    string option = "Y";
    //In order to enter multiple courses.
    while(true){
        if(count >= 1){
            cout<<"Enter another course? Enter Y to continue, enter n or N to end entry\nEnter: ";
            cin>>option;
        }
        if(option == "N" || option =="n") break; //Ends the loop.
        string courseName = "CS225"; //TODO!
        
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
        string studentGrade = Grade(percentage);
        
        //Pushing values into the course list array
        myCourseList.push_back(Courses(courseName, studentGrade));
        count++;
    }
}
