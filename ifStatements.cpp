#include <iostream>
#include <string>

using namespace std;

static int nums[2];

void checkInputs() {
    bool validInput = false;
    string num1Input, num2Input;
    int num1, num2;
    while(!validInput) {
        std::cout << "Enter first number: ";
        std::getline(std::cin, num1Input);
        std::cout << "Enter second number: ";
        std::getline(std::cin, num2Input);
        try {
            num1 = std::stoi(num1Input);
            num2 = std::stoi(num2Input);
            validInput = true;
        }
        catch(...) {                
            std::cout << "Enter a valid number!" << endl;
        }
        
    }
    nums[1] = num1;
    nums[2] = num2;
}

int getMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else if (num2 > num1) {
        return num2;
    } else {
        return 0;
    }
}

int getMin(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else if (num2 < num1) {
        return num2;
    } else {
        return 0;
    }
}

int getEqual(int num1, int num2) {
    if (num1 == num2) {
        return 0;
    } else { 
        return -1;
    }
}

int main() {
    bool isMale = true;
    bool isTall = true;
    int num1, num2;

    if (isMale && isTall) {
        std::cout << "You are a tall male!" << endl << endl;
    } else if (isMale && !isTall) {
        std::cout << "You are a short male" << endl << endl;
    } else if (!isMale && isTall) {
        std::cout << "You are a tall female!" << endl << endl;
    } else if (!isMale && !isTall) {
        std::cout << "You are a short female!" << endl << endl;
    }

    std::cout << "In addition to boolean comparisons, we can do math comparison as well." << endl;

    std::cout << "The following will return the greater of two numbers" << endl << endl;
    checkInputs(); 
    cout << "Your answer : " << getMax(nums[1], nums[2]) << endl << endl;
    
    std::cout << "The folowing will return the minimum of two numbers:" << endl << endl;
    checkInputs();
    cout << "Your answer : " << getMin(nums[1], nums[2]) << endl << endl;

    std::cout << "The following will return 0 if the two numbers are equal and -1 if they are not" << endl;
    checkInputs();
    cout << "Your answer : " << getEqual(nums[1], nums[2]) << endl << endl;
    

    return 0;
}