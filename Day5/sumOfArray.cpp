#include<bits/stdc++.h>

using namespace std;

int arrSum(int arr[],int size,int sum){
    if(size ==0) return arr[size];
    sum = arr[0] + arrSum(arr+1,size-1,sum);
    return sum;
}

int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++) cin>>arr[i];
    cout<<arrSum(arr,size,0);
}