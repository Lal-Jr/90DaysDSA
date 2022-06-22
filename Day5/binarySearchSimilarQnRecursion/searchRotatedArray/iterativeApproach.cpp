#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int start, int end,int key){
    int mid= start + (end-start)/2;
    while(start<end){
        if(arr[mid]== key) return mid;
        if(arr[mid] > key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int pivotInArray(int arr[],int size){
    int start=0,end=size-1;
    int mid= start + (end-start)/2;
    while(start<end){
        if(arr[mid]>= arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid= start + (end-start)/2;
    }
    return mid;
}

int searchRotatedArray(int arr[],int size,int key){
    int pivot=pivotInArray(arr,size);
    if(key >= arr[pivot] && key <= arr[size-1]) return binarySearch(arr,pivot,size-1,key);
    else return binarySearch(arr,0,pivot-1,key);
}

int main(){
    int arr[5],size,key;
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cin>>key;
    cout<<"Index: "<<searchRotatedArray(arr,size,key);
}
