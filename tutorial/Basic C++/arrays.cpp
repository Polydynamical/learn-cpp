#include <iostream>
#include <string>

using namespace std;

int main() {

    int luckyNums[20] = {2, 3, 4, 5, 6}; // type arrayName[size] = {data};

    std::cout << endl << "We can index arrays; here is the first element: ";
    std::cout << luckyNums[0] << endl; // accessing elements in list is nearly identical to python

    std::cout << "We can also change elements in the list: ";
    luckyNums[0] = 19; // we can change elements
    std::cout << luckyNums[0] << endl;


    return 0;
}