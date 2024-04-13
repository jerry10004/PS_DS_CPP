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