#include <bits/stdc++.h>

using namespace std;

void sayhello()
{
    cout << "hello" << endl;
    sayhello();
}

int main()
{
    sayhello();
}