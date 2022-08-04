#include<bits/stdc++.h>

using namespace std;

double findPower(double x, int n){
    if(n==0) return 1.0;
    if(n==1) return x;

    double ans=findPower(x,n/2);

    if(n&1) return x*n*n;
    else return n*n;
}

int main(){
    double x; 
    int n;
    cin>>x>>n;
    if(n>0)
        cout<<findPower(x,n);
    else{
        int a=abs(n);
        double r=findPower(x,a);
        double x=1/r;
        cout<<x;
    }
}