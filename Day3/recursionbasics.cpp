#include <bits/stdc++.h>

using namespace std;

// very inmportant: base case
// other infinite loop and never stops

//trust your function --\> recursive leap of faith
void sayhello(int n)
{
    while (n == 0) //Stopping case or base case
    {
        return;
    }
    sayhello(n - 1);
    cout << "hello" << n << endl;
}

int main()
{
    sayhello(10);
}