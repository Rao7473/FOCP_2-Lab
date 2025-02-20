/*   Create an overloaded print() function: 
a. One takes a string as an argument 
b. Another takes an integer 
c. The third takes both a string and an integer  */

#include <iostream>
using namespace std;

void print(string s) {
    cout << "String: " << s << endl;
}

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(string s, int i) {
    cout << "String: " << s << endl;
    cout << "Integer: " << i << endl;
}

int main() {
    print("Hello");
    print(5);
    print("Hello", 5);
    return 0;
}