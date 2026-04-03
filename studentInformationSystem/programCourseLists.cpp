#include "Header.h"

void SICT(){
    short option;
    cout<<"--Courses--\n1. CS220\n2. CS225\n3. CS230\n4. CS235\n5. CS250\n6. CS270\n7. MA210\n8. PH212\nEnter an option: ";
    cin>>option;
    
    switch (option) {
        case 1: IO();
            break;
        case 2: IO();
        default: cerr<<"Inavlid Input!\n";
            break;
    }
}
