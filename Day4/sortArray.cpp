#include <bits/stdc++.h>

using namespace std;

bool sortArr(int arr[], int size)
{
    if (size == 1)
    {
        return true;
    }
    bool restArr = sortArr(arr + 1, size - 1);
    return (arr[0] < arr[1] && restArr);
}

int main()
{
    int arr[5] = {1, 2, 3, 5};
    cout << sortArr(arr, 5);
}