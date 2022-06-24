#include<bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[],int size,int key){
    if (size == 0) return false;
    if (arr[0] == key) return true;
    else 
        return linearSearch(arr+1,size-1,key);
}

int main(){
    int arr[10],size,key;
    cin>>size;
    for(int i=0;i<size;i++) cin>>arr[i];
    cin>>key;
    if(linearSearch(arr,size,key)) cout<<"Key Found";
    else cout<<"Key Not Found";
}