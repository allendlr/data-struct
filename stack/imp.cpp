#include "static_stack.h"
#include <iostream>
using namespace std;

IntStack::IntStack(int num){
    stackarray = new int[num];
    stacksize = num;
    top = -1;
}

bool IntStack::isFull(){
    if (top == stacksize - 1)
        return true;
    else
        return false;
}

bool IntStack::isEmpty(){
    if (top == -1)
        return true;
    else
        return false;
}

void IntStack::push(int num){
    if (isFull()){
        cout<<"full\n";
    }
    else{
        cout<<"added\n";
        top++;
        stackarray[top] = num;
    }
}

int IntStack::pop(int num){
    if (isEmpty()){
        return 0;
    }
    else{
        num = stackarray[top];
        --top;
        return num;
    }
}

void IntStack::view(){
    cout<<"list\n";
    if (!isEmpty()){
        for(int i = 0; i <= top; i++){
            cout<<stackarray[i]<<endl;
        }
    }
}