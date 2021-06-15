#include <iostream>
#include <string>

using namespace std;

int main() {
    string color, pluralNoun, person;

    cout << "Color: ";
    std::getline(std::cin, color);
    cout << "plural noun: ";
    std::getline(std::cin, pluralNoun);
    cout << "enter a person: ";
    std::getline(std::cin, person);


    cout << endl << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << person << endl;

    return 0;
}