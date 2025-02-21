/*  Create an overloaded function power() 
a. One version takes two int (base and exponent). 
b. Another takes one double and one int.  */

#include <iostream>
#include <math.h>  // For pow() function
using namespace std;

class Calculator {
public:

    int power(int base, int exponent) {
        return pow(base, exponent); 
    }

    double power(double base, int exponent) {
        return pow(base, exponent); 
    }
};

int main() {
    Calculator calc;

    cout << "2^3 = " << calc.power(2, 3) << endl;          
    cout << "2.5^3 = " << calc.power(2.5, 3) << endl;      

    return 0;
}
