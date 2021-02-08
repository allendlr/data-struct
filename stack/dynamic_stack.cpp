#include <iostream>
#include "dynamic_imp.cpp"
using namespace std;

int main(){
    Stack stack;
    stack.pop(0);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.view();
    stack.pop(0);
    stack.pop(0);
    stack.pop(0);
    stack.push(1);
    stack.push(3);
    stack.view();
    stack.pop(1);
    stack.view();
    stack.pop(1);
    stack.pop(1);
}