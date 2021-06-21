#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    ll a, b;
    cin >> n;
    while (n--) {
        scanf("%lld %lld", &a, &b);
        if (max(a, b) > min(a, b) * 2) 
            cout << "NO\n";
        else if (((a + b) % 3) == 0 || ((a + b) % 3) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
