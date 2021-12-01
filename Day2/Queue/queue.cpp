#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("mahendra");
    q.push("singh");
    q.push("dhoni");

    cout<<q.front()<<endl;

    q.pop();
    cout<<q.front()<<endl;
}