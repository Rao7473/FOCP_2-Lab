/* Write a function void concatStrings(int count, ...) that takes a variable number of 
string arguments and concatenates them into one single string.
The first argument count will specify how many strings are passed.  */

#include <iostream>
#include <cstdarg> 
#include <string.h>
using namespace std;

string concatStrings(int count, ...) {
    va_list args; 
    va_start(args, count);  

    string ans = va_arg(args, char*);
    for (int i = 1; i < count; i++) {
        ans = ans + va_arg(args, char*);
    }

    va_end(args); 
    return ans;
}

int main() {
    cout << "concat string is: "<<concatStrings (2, "hello ", "world") << endl;
    return 0;
}
