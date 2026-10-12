
#include <iostream>
using namespace std;

// Function to divide two numbers
double divideNumbers(double a, double b) {
    try {
        if (b == 0) {
            throw "Cannot divide by zero!";
        }
        return a / b;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
        return 0;
    }
}

int main() {
    cout << divideNumbers(10, 2) << endl;
    cout << divideNumbers(10, 0) << endl;

    return 0;
}


