#include <bits/stdc++.h>

using namespace std;

bool palindrome(int i, int n, string s[])
{
    if (i >= n / 2)
        return;
    if (s[i] != s[n - i - 1])
        return false;
    return palindrome(i + 1, n - 1, s);
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (palindrome(0, n, arr) == false)
        cout << "not palindrome";
    else
        cout << "palindrome";
    return 0;
}