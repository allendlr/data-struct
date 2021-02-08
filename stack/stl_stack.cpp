#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int x;
    stack<int , vector<int>> iStack;
    iStack.push(3);
    iStack.push(2);
    iStack.push(1);

    while(!iStack.empty()){
        cout<<iStack.top()<<endl;
        iStack.pop();
    }
}