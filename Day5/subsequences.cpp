#include <bits/stdc++.h>

using namespace std;

void subSequence(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
            cout << it << "";
        cout << endl;
        return;
    }
    // condition for take
    ds.push_back(arr[index]);
    subSequence(index + 1, ds, arr, n);
    // condition for not take
    ds.pop_back();
    subSequence(index + 1, ds, arr, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> ds;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    subSequence(0, ds, arr, n);
}