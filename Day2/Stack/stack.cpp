#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("mahendra");
    s.push("singh");
    s.push("dhoni");

    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;
}