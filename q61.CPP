/*  Create an overloaded function greet() 
a. One version takes no parameters and prints "Hello!". 
b. Another takes a string name and prints "Hello, [name]!". 
c. Another takes a string name and an int age, printing "Hello, [name]! You are [age] years old.".  */
#include <iostream>
using namespace std;

class Greeter {
public:
    void greet() {
        cout << "Hello!" << endl;
    }

    void greet(string name) {
        cout << "Hello, " << name << "!" << endl;
    }

    void greet(string name, int age) {
        cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    }
};

int main() {
    Greeter greeter;

    greeter.greet();               
    greeter.greet("RAO Divyansh ");        
    greeter.greet("RAO DIVYANSH ", 19);      

    return 0;
}
