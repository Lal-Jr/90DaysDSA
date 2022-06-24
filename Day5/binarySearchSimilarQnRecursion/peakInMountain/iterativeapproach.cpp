#include<bits/stdc++.h>

using namespace std;

int peakInMountain(int arr[],int size){
    int start = 0, end = size -1;
    int mid= start + (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]) start=mid+1;
        else end=mid;
        mid= start + (end-start)/2;
    }
    return mid;
}

int main(){
    int arr[5],size;
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<peakInMountain(arr,size);
}