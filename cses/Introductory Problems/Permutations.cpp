#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

int main() {
    int n;
    cin >> n;
    
    if (n == 1) cout << "1";
    if (n < 4) cout << "NO SOLUTION";
    else {
        int k = 2;
        while (k <= n) {
            cout << k << " ";
            k += 2;
        }
        k = 1;
        while (k <= n) {
            cout << k << " ";
            k += 2;
        }
    }

    return 0;
}
