#include <iostream>
#include "dynamic_stack.h"
using namespace std;

Stack::Stack(){
    top = NULL;
}
bool Stack::isEmpty(){
    if(top == NULL)
        return true;
    else
        return false;
}
void Stack::push(int num){
    node *newNode;
    newNode = new node;
    newNode->value = num;
    if (isEmpty()){
        cout<<"added empty\n";
        top = newNode;
        newNode->next = NULL;
    }
    else{
        cout<<"added\n";
        newNode->next = top;
        top = newNode;
    }
}

int Stack::pop(int num){
    node *temp;
    if(isEmpty()){
        cout<<"nothing to be popped\n";
        return 0;
    }
    else{
        cout<<"popped\n";
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
        return num;
    }
}

void Stack::view(){
    node *ptr;
    ptr = top;
    if(isEmpty()){
        cout<<"list is empty";
    }
    else{
        while(ptr){
            cout<<ptr->value<<endl;
            ptr = ptr->next;
        }
    }
}