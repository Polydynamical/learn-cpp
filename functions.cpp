#include <iostream>
#include <string>

using namespace std;

void sayHi(string name) {
    std::cout << endl << "I am now a function! I am supposed to say hi to you!" << endl;
    name[0] = std::toupper(name[0]);
    std::cout << "Hi " << name << "!" << endl;

}

int main() {
    string name;
    std::cout << endl << "Function syntax: type name(parameters) {code goes here}" << endl;
    std::cout << "We can call a function to run specific code" << endl << endl;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    sayHi(name);

    return 0;
}