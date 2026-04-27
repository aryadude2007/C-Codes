#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // Check if denominator is zero
        if (denominator == 0) {
            throw "Division by zero error!"; // Throw an exception
        }
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        // Catch and handle the exception
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
