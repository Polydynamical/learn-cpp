#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    string seq;
    unsigned int res, max;
    cin >> seq;
    res = 0;
    max = 0;
    for (unsigned int i=0; i < seq.length(); i++) {
        if (seq[i] == seq[i+1]) {
            res += 1;
        } else {
            if (res + 1 > max && res != 0) {
                max = res;
            }
            res = 0;
        }
    }
    cout << max + 1;

    return 0;
}
