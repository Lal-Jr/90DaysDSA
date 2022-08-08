#include<bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr, int start, int end){

}

void quicksort(vector<int>& arr, int start, int end){
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