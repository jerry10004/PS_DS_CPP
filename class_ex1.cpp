#include <iostream>
using namespace std;

class Student {
    private:
        double getAvg() const;
        void setPrecision(int) const;
    public:
        string name;
        string sid;
        int *score;
        int size;
        void print() const;
};

double Student::getAvg() const{
    int sum = 0;
    for(int i = 0; i < size; i++) sum += score[i];
    return sum / 3.0;
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
