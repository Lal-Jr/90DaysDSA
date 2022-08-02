#include<bits/stdc++.h>

using namespace std;

int jump(int index,vector<int>& heights){
    if (index==0) return 0;
    int left = jump(index-1,heights) + abs(heights[index] - heights[index-1]);
    int right = INT_MAX;
    if(index > 1) right = jump(index+1,heights) + abs(heights[index] - heights[index+1]);
    return min(right,left);
}

int main(){
    vector<int> heights;
    int index,x=0;
    cin>>index;
    for(int i=0;i<index;i++){
        cin>>x;
        heights.push_back(x);
    }
    cout<<jump(index,heights);
}