#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr,int start,int end){
    int mid = start + (end-start)/2;

    int len1 = mid-start+1, len2 = end-mid;

    int *first = new int[len1], *second = new int[len2];

    //for copying values
    int mainArrayIndex = start;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1=0, index2=0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else 
            arr[mainArrayIndex++] = second[index2++];
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

}

void mergeSort(vector<int>& arr,int start,int end){
    if(start>= end) return;
    int mid=start+(end-start)/2;

    //for sorting left side
    mergeSort(arr,start,mid);

    //for sorting right side
    mergeSort(arr,mid+1,end);

    //merge the right and left sorted arrays
    merge(arr,start,end);
}

int main(){
    vector<int> arr;
    int x,n=5;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    mergeSort(arr,0,n-1);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}