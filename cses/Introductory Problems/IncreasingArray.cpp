#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
// vector<unsigned int> arr;
// unsigned int i, c;

// void inc(unsigned int n, unsigned int cmp) {
//     if (n<cmp) {
//         n++;
//         c++;
//         inc(n,cmp);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     unsigned int n, x, c;
//     vector<unsigned int> arr;
//     cin >> n;
//     while (cin >> x) {
//         arr.push_back(x);
//     }
//     for(i=0; i<n-1; i++) {
//         if (arr[i]>arr[i+1]) {
//             inc(arr[i+1], arr[i], c);
//         }
//         // while(arr[i]>arr[i+1]) {
//         //     arr[i+1]++;
//         //     c++;
//         // }
//     }
//     cout << c;
//     return 0;
// }

int main() {
    ll n, mx, ans, x;
    cin >> n;
    mx = 0;
    ans = 0;
    for (int i=0; i<n; ++i) {
        cin >> x;
        mx = max(x, mx);
        ans+= mx-x;
    }
    cout << ans;
}