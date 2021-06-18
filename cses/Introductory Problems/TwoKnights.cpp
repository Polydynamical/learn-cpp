#include <bits/stdc++.h>

using namespace std;

int main(){
    long k,i;
    cin >> k;
    for(i = 1; i <= k; i++) {
        printf("%ld\n", (i * i) * (i * i - 1)/2 - 4 * (i - 2) * (i - 1));
    }
    return 0;}
