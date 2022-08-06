#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr){
    int n=arr.size(),small;

    for(int i=0;i<n-1;i++){
        int minIndex = i; 
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    vector<int> arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    selectionSort(arr);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}