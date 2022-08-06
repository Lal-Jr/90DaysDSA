#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr,int i,int n){
    if (i+1 == n) return;
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
            minIndex = j;
    }
    swap(arr[i],arr[minIndex]); 

    selectionSort(arr,i+1,n);
}

int main(){
    vector<int> arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    selectionSort(arr,0,5);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}