#include <iostream>
#include <string>
#include "ArrayStack.hpp"

using namespace std;

int main() {
    ArrayStack<int> stackA(10);

    for (int i = 0; i < 10; i++) {
        stackA.push(i);
        cout << i << " ";
    }

    try {
        stackA.push(10);
    }
    catch (string&) {
        cout << "Stack A is full! ";
    }

    ArrayStack<int> stackB(stackA);

    cout << "Stack A length: " << stackA.getLength();
    cout << "Stack B length: " << stackB.getLength();

    try {
        stackA.push(11);
    }
    catch (string&) {
        cout << "push: error, stack is full, avoiding overflow";
    }

    for (int i = 0; i < 5; i++) {
        cout << "Popping " << stackB.peek() << " from stack B";
        stackB.pop();
    }

    cout << "Stack B length: " << stackB.getLength();

    while (!stackB.isEmpty()) {
        stackB.pop();
    }

    cout << "Stack B is now empty after being cleared";

    try {
        stackB.pop();
    }
    catch (string&) {
        cout << "pop: error, stack is empty, avoiding underflow";
    }

    try {
        stackB.peek();
    }
    catch (string&) {
        cout << "peek: error, stack is empty, cannot access the top";
    }

    ArrayStack<int> stackC(1);
    stackC = stackA;

    cout << "Stack A length: " << stackA.getLength();
    cout << "Stack C length: " << stackC.getLength();

    return 0;
}