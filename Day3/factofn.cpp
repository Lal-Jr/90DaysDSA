#include <bits/stdc++.h>

using namespace std;

//ans = n * n - 1 * n - 2 * ... * 1

int factnum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int prevFact = factnum(n - 1);
    return n * prevFact;
}

int main()
{
    int n;
    cin >> n;
    cout << factnum(n);
}