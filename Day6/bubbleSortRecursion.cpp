#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr, int n){
    if(n==0 || n==1) return;

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main(){
    vector<int> arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    bubbleSort(arr,5);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}