#include<iostream>
#include<vector>

using namespace std;

int main(){
    //Initialization
    vector<int> v; // zero size
    vector<int> a(5,1); // with size 5 and every element initialized with 1
    vector<int> x(a); // vector x copies values of a

    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    
    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
    cout<<"Front -> "<<v.front()<<endl;
    cout<<"Back -> "<<v.back()<<endl;

    for(int i:v){
        cout<< i<<" ";
    }
    v.pop_back();
    cout<<endl;
    for(int i:v){
        cout<< i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"size: "<<v.size()<<endl;// size is 0 but capacity is still original
    cout<<"capacity: "<<v.capacity()<<endl;

}