#include <iostream>
#include "Student.h"

int main(){
    Student s;
    int score[] = {100, 80, 90};
    s.name = "HongGiDong";
    s.sid = "21800000";
    s.size = 3;
    s.score = score;    
    s.print();
    return 0;
}
