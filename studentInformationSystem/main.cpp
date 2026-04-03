#include "Header.h"

//Operator overload
ostream& operator<<(ostream& os, const Courses& c){
    os<<c.courseName <<"  " <<c.grade;
    return os;
}

//Global variable definitions
ifstream studentData;
vector<Courses> myCourseList;

//Mian function
int main(){
    int option = 0;
    cout<<"------Main Manu------\nWhat do you want to do?\n1. Enter results\n2. Enter CA only\nChoose an option: ";
    cin>>option;
    
    switch (option) {
        case 1: schools();
            break;
        case 2: schools(); //TODO
            break;
        default: cerr<<"Invalid input! ";
            break;
    }
    
    //Reading from the array
    for(size_t i = 0; i < myCourseList.size(); ++i){
        cout<<myCourseList[i] <<endl;
    }
}
