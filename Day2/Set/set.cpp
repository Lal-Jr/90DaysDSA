#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);// only unique elements get recorded
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.count(0);

    set<int>::iterator t = s.find(5);// when used we get the reference to the element specified

    cout<<*t;

}