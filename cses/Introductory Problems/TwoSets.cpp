#include <bits/stdc++.h>

using namespace std;

long long n;
void calc(long long j) {
    if (n % 2 == 0){
        cout << n / 2 << "\n";
        for (long long v = j; v < n / 2; v += 2) cout << v + 1 << " " << n - v << " ";
   } else {
        cout << n / 2 - j + 1 << "\n";
        for (long long v = j; v < (n+1) / 2; v += 2) {
            if (j == 1 && v == (n + 1) / 2 - 1) {cout << n - v + 1 << " "; continue;}
            if (j == 0 && v == 0) {cout << v + 1 << " " << (n+1) / 2 << " "; continue;}
            cout << v + 1 << " " << n - v + 1 << " ";
        }
    }
    cout << "\n";
}

int main() {
    scanf("%lld", &n);
    if ((n * (n + 1) / 2) % 2 != 0) {
        printf("NO");
        return 0; 
    } else {
        printf("YES\n");
    }
   
    calc(1);
    calc(0);

    return 0;
}
