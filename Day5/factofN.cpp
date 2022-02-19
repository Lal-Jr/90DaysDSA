#include <bits/stdc++.h>

using namespace std;

void factN(int n, int fact)
{
    if (n == 0)
    {
        cout << fact;
        return;
    }
    factN(n - 1, fact * n);
}

int main()
{
    int n = 5;
    // cin >> n;
    factN(n, 1);
    return 0;
}
