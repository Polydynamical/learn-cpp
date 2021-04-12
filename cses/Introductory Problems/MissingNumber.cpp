#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    // unsigned int i, n, k, x;
    // vector<unsigned int> inputArr, realArr;
    // cin >> n;

    // while (scanf("%d ", &x) == 1) {
    //     inputArr.push_back(x);
    // }
    // i=0;
    // while (i < n) {
    //     realArr.push_back(i+1);
    //     k=0;
    //     while (k < n-1) {
    //         if (realArr[i] == inputArr[k]) {
    //             realArr[i] = 0;
    //             break;
    //         }
    //         k++;
    //     }
    //     if (realArr[i] != 0) {
    //         printf("%d", realArr[i]);
    //         break;
    //     }
    //     i++;
    // }

    unsigned long int n, s, x;
    cin >> n;
    s = 0;
    while (cin >> x) {
        s += x;
    }
    cout << n*(n+1)/2 - s;

    return 0;
}