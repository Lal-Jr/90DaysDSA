#include<bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr, int start, int end){
    int count=0, pivot = arr[start];
    for(int i=start+1;i<=end;i++){
        if(pivot>=arr[i])
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);
    
    int i=start,j=end;

    while(pivotIndex > i && pivotIndex < j){
        while(arr[pivotIndex] > arr[i]){
            i++;
        }
        while(arr[pivotIndex] < arr[j]){
            j--;
        }

        while(arr[i]>arr[pivotIndex] && arr[j]<arr[pivotIndex]){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int>& arr, int start, int end){
    if(start >= end) return;

    int p = partition(arr, start, end);

    quickSort(arr, start, p-1);

    quickSort(arr, p+1, end);
}

int main(){
    vector<int> arr;
    int x,n=5;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    quickSort(arr,0,n-1);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}