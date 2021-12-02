#include<iostream>
#include<map>

using namespace std;

int main()
{ 
    map<int,string> m;

    m[1] = "babbar";
    m[2] = "harish";
    m[3] = "something";

    m.insert({5,"cool"});

    for(auto i:m){
        cout<<i.first<<endl<<i.second<<endl;
    }

    cout<<m.count(13)<<endl;
    m.erase(3);
    for(auto i:m){
        cout<<i.first<<endl<<i.second<<endl;
    }
cout<<endl;
    auto it = m.find(1);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).second<<endl;
    }
}
