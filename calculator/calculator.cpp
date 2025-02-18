#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char operation;

    // Display a welcome message
    cout << "Basic Calculator" << endl;
    cout << "----------------" << endl;

    // Get the first number from the user
    cout << "Enter the first number: ";
    cin >> number1;

    // Ask the user for the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Get the second number from the user
    cout << "Enter the second number: ";
    cin >> number2;

    // Perform the calculation based on the operator
    if (operation == '+') {
        result = number1 + number2;
        cout << "The result is: " << result << endl;
    } else if (operation == '-') {
        result = number1 - number2;
        cout << "The result is: " << result << endl;
    } else if (operation == '*') {
        result = number1 * number2;
        cout << "The result is: " << result << endl;
    } else if (operation == '/') {
        if (number2 != 0) {
            result = number1 / number2;
            cout << "The result is: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
    } else {
        cout << "Invalid operator. Please use +, -, *, or /." << endl;
    }

    return 0;
}
