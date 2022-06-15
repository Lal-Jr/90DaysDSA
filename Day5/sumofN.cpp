#include <bits/stdc++.h>

using namespace std;

void sumN(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    sumN(n - 1, sum + n);
}

int main()
{
    int n;
    cin >> n;
    sumN(n, 0);
    return 0;
}