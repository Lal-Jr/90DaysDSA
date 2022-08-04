#include<bits/stdc++.h>

using namespace std;

void reverse(string& str, int i, int j){
    if(i>j) return;

    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}

int main(){
    string s;
    cin>>s;
    int j = s.length()-1, i=0;

    reverse(s,i,j);

    cout<<s;
}