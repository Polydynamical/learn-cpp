#include <iostream>

using namespace std;

int main()
{
    string phrase = "giraffe";
    cout << "The first letter of " << phrase << " is " << phrase[0] << ". The length of the word is " << phrase.length() << endl << endl;

    cout << "I can also change the first letter." << endl;
    // string[index];
    phrase[0] = 'B';
    cout << phrase << endl << endl;

    cout << "We can also find the amount of occureneces of a string in a string.\n";
    cout << "The following tells us the amount of times 'ir' appears in giraffe" << endl;
    // find("text", startIndex);
    cout << phrase.find("ir", 0) << endl << endl;

    cout << "We can also print substrings" << endl;
    // substr(startIndex, length);
    cout << phrase.substr(4, 2) << endl;
    
    return 0;
}