#include<bits/stdc++.h>

using namespace std;

void walk(int src,int dest){
    if (src==dest){
        cout<<"Reached"<<endl;
        return;
    }
    walk(src++,dest);
}

int main(){
    int src,dest;
    cin>>src,dest;
    walk(src,dest);
    return 0;
}