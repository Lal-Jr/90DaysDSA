#include<bits/stdc++.h>

using namespace std;

bool subsequenceSum(int arr[],int n, int sum, vector<int> &ds,int index, int s){
    if(index == n){
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    s += arr[index];

    subsequenceSum(arr,n,sum,ds,index+1,s);
    ds.pop_back();
    s -= arr[index];

    subsequenceSum(arr,n,sum,ds,index+1,s);
}

int main(){
    int arr[] = {1,2,1}, n=3,sum=2;
    vector<int> ds;
    subsequenceSum(arr,n,sum,ds,0,0);
}