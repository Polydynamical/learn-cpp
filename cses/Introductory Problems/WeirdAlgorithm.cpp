#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    printf("%ld ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            printf("%ld ", n);
        } else {
            n = 3*n + 1;
            printf("%ld ", n);
        }
    }

    return 0;
}