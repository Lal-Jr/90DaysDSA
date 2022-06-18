#include <bits/stdc++.h>

using namespace std;

int firstOcc(int arr[], int start, int end, int key) {
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end) {
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]) start = mid + 1;
        else if(key < arr[mid]) end = mid - 1;
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int start, int end, int key) {
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) start = mid + 1;
        else if(key < arr[mid])  end = mid - 1;
        mid = start + (end-start)/2;
    }
    return ans;
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