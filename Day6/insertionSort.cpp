#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1]=temp;
    }
}

int main(){
    vector<int> arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    insertionSort(arr);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}