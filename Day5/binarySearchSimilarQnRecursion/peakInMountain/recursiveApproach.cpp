#include<bits/stdc++.h>

using namespace std;

int peakInMountain(int arr[], int start, int end){
    if(start>end) return -1;
    int mid = start + (end-start)/2;
    if(arr[mid]<arr[mid+1]) return peakInMountain(arr,mid+1,end);
    else return peakInMountain(arr,start,mid);
}

int main(){
    int arr[5],size;
    cin>>size;
    for(int i = 0;i < size;i++) cin>>arr[i];
    int start=0, end=size -1;
    cout<<peakInMountain(arr,start,end);
}