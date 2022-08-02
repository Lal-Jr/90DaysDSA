#include<bits/stdc++.h>

using namespace std;

int jump(int index, vector<int>& heights, vector<int>& dp){
    if(index==0) return 0;
    if(dp[index] != -1) return dp[index];
    int left = jump(index-1,heights,dp) + abs(heights[index] - heights[index-1]);
    int right = INT_MAX;
    if(index > 1) right = jump(index-2,heights,dp) + abs(heights[index] - heights[index-2]);
    return min(right,left);
}

int main(){
    vector<int> heights;
    int index,x=0;
    cin>>index;
    vector<int> dp(index+1,-1);
    for(int i=0;i<index;i++){
        cin>>x;
        heights.push_back(x);
    }
    cout<<jump(index,heights,dp);
}