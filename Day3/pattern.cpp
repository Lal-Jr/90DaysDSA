#include<bits/stdc++.h>

using namespace std;

void pattern(int n){
    if(n==0){
        return;
    }
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;
    pattern(n-1);
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;
}

int main(){
    pattern(5);
}