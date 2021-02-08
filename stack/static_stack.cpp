#include <iostream>
#include "imp.cpp"
using namespace std;

int main(){
    IntStack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.view();
    stack.pop(1);
    stack.view();
    return 0;
}