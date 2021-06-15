#include <iostream> // standard import
#include <string> // We need this for getline
#include <regex> // We need this to see if name is invalid

using namespace std;

typedef string str;

bool hasNonAlpha(string v) {
    return !std::regex_match(v, std::regex("^[A-Za-z]+$"));
}

bool hasNonNumeric(string v) {
    return !std::regex_match(v, std::regex("^[0-9]+$"));
}

int main()
{
    bool validAge = false;
    bool validName = false;
    str ageInput;
    str nameInput;
    int age;
    str name;

    std::cout << endl << "Basic example of char/int input: " << endl;
    while(validAge == false) {
        std::cout << "Enter your age: ";
        // std::cin >> age;  This can be used if it is the only input (Since I ask for your name below)
        std::getline(std::cin, ageInput);
        if (hasNonNumeric(ageInput) == true) {
            std::cout << "Enter a valid age!" << endl;
        } else {
            validAge = true;
            age = std::stoi(ageInput);
        }
    }
    std::cout << "You are " << age << " years old!" << endl << endl;


    std::cout << "However, if we want a string, we don't use cin..." << endl;
    while(validName == false) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, nameInput);
        if (hasNonAlpha(nameInput) == true) { // This line checks to see if any of the characters in string array are digits. If it has one, it will reprompt the user.
            std::cout << "Enter a valid name!" << endl;
        } else {
            validName = true;
            name = nameInput;
        }
    }
    std::cout << "Hello " << name << "!" << endl;
        
    return 0;
}