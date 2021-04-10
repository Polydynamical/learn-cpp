#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "We can print numbers!" << endl << 40 << endl << endl;

    cout << "We can also do math!" << endl;
    cout << "5 + 6 = " << 5 + 6 << endl;
    cout << "5 - 3 = " << 5 - 3 << endl;
    cout << "5 * 2 = " << 5 * 2 << endl;
    cout << "5 / 3 = " << 5 / 3 << endl;
    cout << "5 modulo 2 = " << 5 % 2 << endl << endl;

    cout << "We can also increment numbers with [num]++" << endl;
    int w = 3;
    cout << w << endl;
    w ++;
    cout << w << endl << endl;

    cout << "There is also a C++ math import <cmath>!" << endl;
    cout << "2^5 = " << pow(2, 5) << endl;
    cout << "sqrt36 = " << sqrt(36) << endl;
    cout << "round 4.3: " << round(4.3) << endl;
    cout << "ceil 2.3: " << ceil(2.3) << endl;
    cout << "floor 4.5: " << floor(4.5) << endl;
    cout << "is 4 or 5 bigger: " << fmax(4, 5) << endl;
    cout << "is 5 or 8 smaller: " << fmin(5, 8) << endl << endl;


    return 0;
}