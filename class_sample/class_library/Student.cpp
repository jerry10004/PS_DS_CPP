#include "Student.h"

double Student::getAvg() const{
    int sum = 0;
    for(int i = 0; i < size; i++) sum += score[i];
    return sum / size * 1.0;
}

void Student::setPrecision(int n) const { 
    cout << fixed;
    cout.precision(n);
} 

void Student::print() const{
    cout << "[" << sid << "] " << name << endl;
    setPrecision(1);
    cout << "The Average Score is " << getAvg() << endl;
}