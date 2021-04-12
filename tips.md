- ```#include <bits/stdc++.h>``` includes entire std library (no need to import iostream, algorithm, etc)

- "using namespace std" allows for writing just ```cout``` rather than ```std::cout```

- compile with ```g++ -std=c++11 -02 -Wall test.cpp -o test.exe```. -02 optimizes code; -std=c++11 is c++11 standard; -Wall shows warnings about possible errors

- "cin" can be used to read input separated by whitespace (spaces, newlines)

- To make input and output more efficient include at the begining:
    ```cpp
    ios::sync_with_stdio(0);
    cin.tie(0);
    ```

- Instead of ```endl``` in cout, use ```\n```, it's faster.

- Use getline to read an entire line of input

- Use while loop to get unknown amount of input:
    ```cpp
    while (cin >> x) {
        // code with var x
    }
    ```

- Add the following for reading input/output from files:
    ```cpp
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ```

- int ranges from -2^31 to 2^31 - 1  == -2*10^9 .. 2*10^9
- long long ranges from -2^63 to 2^63 -1  == -9*10^18 .. 9*10^18

- Common error: multiplying ints together for long longng result:
    ```cpp
    int a = 123456789;
    long long b = a * a;
    cout << b << "\n"; // -1757895751
    ```

    This can be fixed with changing ```long long b = a * a``` to ```long long b = (long long)a * a;```

- Checking for equality between flating point numbers should not be done with "==" (sometimes c++ has precision) errors. Use the following:
    ```cpp
    if (abs(a-b) < 1e-9) {
        // a and b are equal
    }

- Shorten code with type defs:
    ```cpp
    long long a = 123456789999;
    long long b = 987654321;
    cout << a * b << "\n";
    ```

    can be shortened to

    ```cpp
    typedef long long ll;
    ll a = 123456789;
    ll b = 987654321;
    cout << a * b << "\n";
    ```

    Other common typedefs are 
    ```cpp
    typedef vector<int> vi;
    typedef pair<int, int> pi;

- Shorten code with Macros (acryonyms for functions)
    For example, 
    ```cpp
    v.push_back(make_pair(y1, x1));
    v.push_back(make_pair(y2, x2));
    int d = v[i].first+v[i].second;
    ```

    can be shortened to

    ```cpp
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair

    v.PB(MP(y1, x1));
    v.PB(MP(y2, x2));
    int d = v[i].F+v[i].S;
    ```

    Furthermore, functions with parameters can be shortened as follows
    ```cpp
    #define REP(i, a, b) for (int i=a; i <= b; i++)

    REP(i, 1, n) {
        search(i);
    }

    #define SQ(a) (a)*(a);
    cout << SQ(a + a) << "\n";
    ```

- Know basic number theory (arithmetic sums, geometric sums, harmonic sums,) 
- Know set theory (intersections, unions, complements, differences, subsets)
- Know logic:
    A B | (¬A) (¬B) (A ∧ B) (A ∨ B) (A ⇒ B) (A ⇔ B)
    ________________________________________________
    0 0 | 1      1     0       0       1         1  
    0 1 | 1      0     0       1       1         0  
    1 0 | 0      1     0       1       0         0  
    1 1 | 0      0     1       1       1         1 

    Predicates, quantifiers, negation, conjunction, disjunction, implication, and equivalence.

- Known functions (ceiling, floor, min, max, factorial, fibonacci numbers, binet's formula)
- Know logarithms (all log rules and natural logarithm)