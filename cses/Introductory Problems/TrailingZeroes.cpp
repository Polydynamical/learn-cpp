#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, j=5, ans = 0;
    cin >> n;
     
    while (floor(n/j) > 0) {
        ans += floor(n/j);
        j *= 5;
    }
    cout << ans;


    return 0;
}
