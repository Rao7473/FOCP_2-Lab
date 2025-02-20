/*  Overload a function multiply() 
a. One version takes two int values and returns their product. 
b. Another takes one int and one double. 
c. Another takes three float values.  */

#include <iostream>
using namespace std;

class Calculator {
public:

    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(int a, double b) {
        return a * b;
    }

    float multiply(float a, float b, float c) {
        return a * b * c;
    }
};

int main() {
    Calculator calc;

    cout << "Multiply 3 and 4: " << calc.multiply(3, 4) << endl;
    cout << "Multiply 5 and 2.5: " << calc.multiply(5, 2.5) << endl;
    cout << "Multiply 1.2, 2.3, and 3.4: " << calc.multiply(1.2f, 2.3f, 3.4f) << endl;

    return 0;
}
