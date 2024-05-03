#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string str;
    ifstream fin;
    fin.open("fruits.txt");

    int value;
    int i = 0;
    while(!fin.eof()){
        fin >> str >> value; 
        cout << value << " " << str << endl;
    }
    fin.close();

    return 0;
}