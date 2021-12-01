#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    list<int> x(5,100); // 5 elements each initialized with 100

    l.push_front(1);
    l.push_back(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}