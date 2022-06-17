#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int size){
    if(size ==0 || size==1) return true;
    if(arr[0] > arr[1]) return false;
    else {
        bool remainingArr = isSorted(arr+1,size-1);
        return remainingArr;
    }
}

int main(){
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(isSorted(arr,size)) cout<<"Sorted";
    else cout<<"Not Sorted";

}