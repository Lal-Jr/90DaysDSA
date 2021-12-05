#include <bits/stdc++.h>

using namespace std;

int sumofn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int sum = sumofn(n - 1);
    return sum + n;
}

int main()
{
    cout << sumofn(1);
}