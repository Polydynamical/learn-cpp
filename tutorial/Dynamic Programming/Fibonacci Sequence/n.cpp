#include <iostream>
#include <map>
using namespace std;

int fib(int n, map<int, int> memo = {}) {
    if (memo.count(n)) return memo[n];
    if (n<=2) return 1;

    memo.insert({n, fib(n-1, memo) + fib(n-2, memo)});
    return memo[n];
}

int main() {
    int memo[];
    cout << fib(8) << "\n";
    cout << fib(13) << "\n";
    cout << fib(50) << "\n";

    return 0;
}