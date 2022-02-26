#include <bits/stdc++.h>

using namespace std;

// 1,2,3,4,5,6,7,8,9,.....
// 0,1,1,2,3,5,8,13,21,....

// fib(n) = fib(n-1) + fib(n-2)

// time complexity is exponential in nature i.e nearly equal to 2^n as each guy is calling 2 other guys

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}