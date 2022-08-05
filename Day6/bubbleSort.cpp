#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}

int main(){
    vector<int> arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    bubbleSort(arr);
    for(int i=0; i < arr.size(); i++)
    cout << arr.at(i) << ' ';
}