#include <iostream>

using namespace std;

int fib(int n) {
    if (n<=2) return 1;
    return (fib(n-1)+fib(n-2));
}

int main() {

    cout << fib(8) << "\n";
    cout << fib(13) << "\n";
    cout << fib(50) << "\n";

    return 0;
}