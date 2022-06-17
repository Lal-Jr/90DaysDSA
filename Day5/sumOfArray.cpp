#include<bits/stdc++.h>

using namespace std;

int arrSum(int arr[],int size){
    if(size ==0) return arr[size];
    int sum = arr[0] + arrSum(arr+1,size-1);
    return sum;
}

int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++) cin>>arr[i];
    cout<<arrSum(arr,size);
}