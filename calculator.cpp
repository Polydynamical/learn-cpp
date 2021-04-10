#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isOperator(string v) {
    return std::regex_match(v, std::regex("^[*/+%-]+$"));

}

bool isNumber(string e) {
    return std::regex_match(e, std::regex("^[0-9]+$"));

}

double compute(int num1, char operatorValue, int num2) {
    if (operatorValue == '+') {            
        return num1 + num2;
    }
    if (operatorValue == '-') {            
        return num1 - num2;
    }
    if (operatorValue == '*') {            
        return num1 * num2;
    }
    if (operatorValue == '/') {            
        return num1 / num2;
    }
    if (operatorValue == '%') {
        return num1 % num2;
    }

    return 0.0;
}

int main() {
    char operatorValue;
    string operatorInput;
    string num1Input;
    string num2Input;
    int num1;
    int num2;
    bool validOperator = false;
    bool validNum1 = false;
    bool validNum2 = false;


    while(validOperator == false) {
        cout << "Enter an operator: ";
        std::getline(std::cin, operatorInput);
        if (isOperator(operatorInput) == false) {
            cout << "Enter a valid operator!" << endl;
        } else {
            validOperator = true;
            operatorValue = operatorInput[0];
        }
    } 

    while(validNum1 == false) {
        cout << "Enter your first number: ";
        std::getline(std::cin, num1Input);
        if (isNumber(num1Input) == false) {
            cout << "Enter a valid number!" << endl;
        } else {
            validNum1 = true;
            num1 = std::stoi(num1Input);
        }
    } 

    while(validNum2 == false) {
        cout << "Enter your second number: ";
        std::getline(std::cin, num2Input);
        if (isNumber(num2Input) == false) {
            cout << "Enter a valid number!" << endl;
        } else {
            validNum2 = true;
            num2 = std::stoi(num2Input);
        }
    } 

    cout << "Your answer : " << compute(num1, operatorValue, num2) << endl << endl;

}
