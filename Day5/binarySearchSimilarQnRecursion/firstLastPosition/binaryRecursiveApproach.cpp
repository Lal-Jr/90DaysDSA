#include <bits/stdc++.h>

using namespace std;

int firstOcc(int arr[],int start,int end,int key){
    if(start>end) return -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == key && (arr[mid-1] < key || mid == 0)) return mid;
    if(arr[mid] < key) return firstOcc(arr,mid+1,end,key);
    else return firstOcc(arr,start,mid-1,key);
}

int lastOcc(int arr[],int start,int end,int key){
    if(start>end) return -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == key && (arr[mid+1] > key || mid ==  end)) return mid;
    if(arr[mid] > key) return lastOcc(arr,start,mid-1,key);
    else return lastOcc(arr,mid+1,end,key);
}

int main(){
    int arr[10],size,key;
    cin>>size;
    for(int i=0;i<size;i++) cin>>arr[i];
    cin>>key;
    int start=0, end=size-1;
    cout<<"First Occurrence at "<<firstOcc(arr,start,end,key)<<endl;
    cout<<"Last Occurrence at "<<lastOcc(arr,start,end,key);
}