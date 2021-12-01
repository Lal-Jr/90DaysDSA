#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }

    d.push_front(3);
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.erase(d.begin(),d.begin()+1);
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

}