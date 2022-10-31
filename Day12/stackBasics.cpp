#include<bits/stdc++.h>

using namespace std;

int main(){
    // stack creation
    stack<int> s;

    // push operation => insertion
    for(int i=1;i<=10;i++)
        s.push(i);

    // return top element
    cout<<s.top()<<endl;  
    cout<<s.size()<<endl;

    // pop operation => removal
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    if(s.empty()) cout<<"stack is empty";
    else cout<<"not empty";

    return 0;
}