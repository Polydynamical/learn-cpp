#include <bits/stdc++.h>
 
using namespace std;
 
long long x,y,t,ans;
 
void calc() {
 
    if (y >= x) {
        if (y % 2 == 0) {
            ans = y * y - x + 1;
        } else {
            ans = (y - 1) * (y - 1) + x;
        }
    } else {
        if (x % 2 == 1) {
            ans = x * x - y + 1;
        } else {
            ans = (x - 1) * (x - 1) + y;
        }
    }
    cout << ans << "\n";
}
 
int main() {
    cin >> t;
    
    for (long long j=0; j < t; j++) {
        scanf("%lld %lld", &y, &x);
        calc();
        
    }    
 
    return 0;
}
