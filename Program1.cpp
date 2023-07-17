#include <iostream>
using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    char operation;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the type of operation (+, -, *, /): ";
    cin >> operation;

    Calculator calculator(a, b);

    switch (operation) {
        case '+':
            cout << "Result: " << calculator.add() << endl;
            break;
        case '-':
            cout << "Result: " << calculator.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calculator.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calculator.divide() << endl;
            break;
        default:
            cout << "Error: Invalid operation entered." << endl;
    }

    return 0;
}
