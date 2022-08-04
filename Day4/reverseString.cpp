#include <bits/stdc++.h>

using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string restStr = str.substr(1); // substr gives the the string starting from the index given as argument
    reverse(restStr);
    cout<< str[0];
}

int main()
{   
    string s;
    cin>>s;
    reverse(s);
}