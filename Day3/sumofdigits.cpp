#include <bits/stdc++.h>

using namespace std;

// output: 1+2+3+4+5+6 =21
//123456 -> 12345 6
//12345 -> 1234 5
//1234 -> 123 4
//123 -> 12 3
//12 -> 1 2
//1 -> 0 1

int sum_digits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return sum_digits(num / 10) + num % 10;
}

int main()
{
    cout << sum_digits(123456);
}
