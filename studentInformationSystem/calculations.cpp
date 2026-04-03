#include "Header.h"

double calculateCA(double t1, double t2){
    return ((t1 + t2)/200)*40;
}

double calculateSessional(double CA, double sessional){
    return ((sessional/100)*60) + CA;
}
