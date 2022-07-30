#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=1) cout<<1;
    int prev=2, prev2=1;
    for(int i=3;i<=n;i++){
        int curr = prev + prev2;
        prev2 =prev;
        prev=curr;
    }
    cout<< prev;
    return 0;
}