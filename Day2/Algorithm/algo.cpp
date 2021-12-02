#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);

    cout<<binary_search(v.begin(), v.end(), 13)<<endl;

    cout<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),7)-v.end()<<endl;

    int a=3;
    int b=5;

    cout<<max(a,b)<<" "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a ="<<a<<" "<<"b ="<<b<<endl;
    string x = "abcd";
    reverse(x.begin(),x.end());
    cout<<x<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}