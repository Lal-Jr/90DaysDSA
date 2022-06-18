#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[],int start,int end,int key){
    if(start>end) return false;
    int mid = (start + end)/2;
    if(arr[mid] == key) return true;
    if(arr[mid] < key) return binarySearch(arr,mid+1,end,key);
    else return binarySearch(arr,start,mid-1,key);
}

int main(){
    int arr[10],size,key;
    cin>>size;
    for(int i=0;i<size;i++) cin>>arr[i];
    cin>>key;
    int start=0, end=size-1;
    if(binarySearch(arr,start,end,key)) cout<<"Key Found";
    else cout<<"Key Not Found";
}