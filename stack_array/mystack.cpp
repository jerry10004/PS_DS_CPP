#include <iostream>
using namespace std;

struct elem{
    int value;
};

class MyStack{
private:
    int size;
    int top;
    elem *list;

public:
    MyStack(int);
    ~MyStack(){ delete[] list; };
    void initialize();
    void push(const elem& pop);
    elem* pop();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;
} ;

MyStack::MyStack(int s){
    size = s;
    initialize();
}

void MyStack::initialize(){
    top = 0;
    list = new elem[size];
}
bool MyStack::isEmpty() const{
    return (top == 0)? true : false;
}
bool MyStack::isFull() const{
    return (top == size)? true : false;
}

void MyStack::push(const elem& e){
    if(isFull()){
        //cout << "Cannot add to a full stack!" << endl;
        return;
    }
    list[top++] = e;
}

elem* MyStack::pop(){
    elem *ptr = nullptr;
    if(isEmpty()) return ptr;
    return &list[--top];
}

void MyStack::print() const {
    for(int i =0; i < top; i++){
        cout << list[i].value << endl;
    }
}

int main()
{
    elem one;
    MyStack s1(5);
    one.value = 10 ; s1.push(one);
    one.value = 20 ; s1.push(one);
    one.value = 30 ; s1.push(one);
    one.value = 40 ; s1.push(one);
    one.value = 50 ; s1.push(one);
    one.value = 60 ; s1.push(one);
    s1.print();
    cout << s1.pop()->value << endl;
    cout << s1.pop()->value << endl;
    s1.print();
    return 0;
}