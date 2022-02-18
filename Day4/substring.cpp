#include <bits/stdc++.h>

using namespace std;

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string res = s.substr(1);
    subseq(ros, ans);
    sub(ros, ans + ch)
}

int main()
{
    subseq("ABC", "");

    return 0;
}