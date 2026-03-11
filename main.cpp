#include <iostream>
#include <string>
#include "ArrayStack.hpp"

using namespace std;

int main() {
    try {
        ArrayStack<int> a(5);
        a.push(10);
        a.push(20);
        a.push(30);
        cout << a;
        cout << "peek: " << a.peek() << endl;
        a.pop();
        cout << a;
        a.rotate(Stack<int>::LEFT);
        cout << a;
        a.rotate(Stack<int>::RIGHT);
        cout << a;
    }
    catch (string& e) {
        cout << "int normal case error: " << e;
    }

    try {
        ArrayStack<int> a(2);
        a.pop();
    }
    catch (string& e) {
        cout << "int pop on empty: " << e;
    }

    try {
        ArrayStack<int> a(2);
        a.push(1);
        a.push(2);
        a.push(3);
    }
    catch (string& e) {
        cout << "int push on full: " << e;
    }

    try {
        ArrayStack<int> a(3);
        a.rotate(Stack<int>::LEFT);
    }
    catch (string& e) {
        cout << "int rotate on empty: " << e;
    }

    try {
        ArrayStack<int> a(3);
        a.push(99);
        a.rotate(Stack<int>::RIGHT);
    }
    catch (string& e) {
        cout << "int rotate on one element: " << e;
    }

    try {
        ArrayStack<string> b(4);
        b.push("apple");
        b.push("banana");
        b.push("cherry");
        cout << b;
        cout << "peek: " << b.peek() << endl;
        b.pop();
        cout << b;
        b.rotate(Stack<string>::LEFT);
        cout << b;
        b.rotate(Stack<string>::RIGHT);
        cout << b;
    }
    catch (string& e) {
        cout << "string normal case error: " << e;
    }

    try {
        ArrayStack<string> b(2);
        b.pop();
    }
    catch (string& e) {
        cout << "string pop on empty: " << e;
    }

    try {
        ArrayStack<string> b(2);
        b.push("x");
        b.push("y");
        b.push("z");
    }
    catch (string& e) {
        cout << "string push on full: " << e;
    }

    try {
        ArrayStack<string> b(3);
        b.rotate(Stack<string>::LEFT);
    }
    catch (string& e) {
        cout << "string rotate on empty: " << e;
    }

    try {
        ArrayStack<string> b(3);
        b.push("only");
        b.rotate(Stack<string>::RIGHT);
    }
    catch (string& e) {
        cout << "string rotate on one element: " << e;
    }

    try {
        ArrayStack<double> c(3);
        c.push(1.1);
        c.push(2.2);
        c.push(3.3);
        cout << c;
        cout << "peek: " << c.peek() << endl;
        c.pop();
        cout << c;
        c.rotate(Stack<double>::LEFT);
        cout << c;
        c.rotate(Stack<double>::RIGHT);
        cout << c;
    }
    catch (string& e) {
        cout << "double normal case error: " << e;
    }

    try {
        ArrayStack<double> c(1);
        c.pop();
    }
    catch (string& e) {
        cout << "double pop on empty: " << e;
    }

    try {
        ArrayStack<double> c(1);
        c.push(3.14);
        c.push(2.71);
    }
    catch (string& e) {
        cout << "double push on full: " << e;
    }

    try {
        ArrayStack<double> c(2);
        c.rotate(Stack<double>::LEFT);
    }
    catch (string& e) {
        cout << "double rotate on empty: " << e;
    }

    try {
        ArrayStack<double> c(2);
        c.push(8.8);
        c.rotate(Stack<double>::RIGHT);
    }
    catch (string& e) {
        cout << "double rotate on one element: " << e;
    }

    cout << "Finished testing normal and exception cases." << endl;
    return 0;
}