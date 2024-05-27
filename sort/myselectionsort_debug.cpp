// compile for debugging
// g++ myselectionsort_debug.cpp -DEBUGMODE

#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void selectionSort(int *arr, int n){
    int min_i = 0;

    for(int i = 0; i < n-1; i++){
        min_i = i;
        for(int j = i+1; j < n; j++){
            if(arr[min_i] > arr[j]) min_i = j;
        }
        if(i != min_i) swap(arr[i], arr[min_i]);
#ifdef DEBUGMODE
    print(arr, n);
#endif
    }
}

int main(){
    int arr[] = { 64, 25, 12, 22, 11 };
    print(arr, 5);
    selectionSort(arr, 5);
    cout << "====" <<endl;
    print(arr, 5);
    return 0;
}