// Write a recursive function string reverseString(string str) that returns the reverse of a given string. 
// For example, reverseString("hello") should return "olleh".

#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    if (str.length() == 0) {
        return "";
    }
    return str[str.length() - 1] + reverseString(str.substr(0, str.length() - 1));
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reverse of the string is: " << reverseString(str) << endl;
    return 0;
}

