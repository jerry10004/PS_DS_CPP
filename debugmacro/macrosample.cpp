// compile for debugging
// g++ macrosample.cpp -D_DEBUG

#include <iostream>
using namespace std;

int main(){
#ifdef _DEBUG
    cout << "=> Debug mode !!!" << endl;
#endif

    cout << "Hello World!!! " << endl;
    return 0;
}