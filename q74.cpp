// Write a function void swapNumbers(int &a, int &b) that swaps two numbers using pass-by-reference.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}