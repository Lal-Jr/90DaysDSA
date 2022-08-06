#include<bits/stdc++.h>

using namespace std;

int jump(vector<int>& heights){
    int n= heights.size();
    vector<int> dp(n,0);
    dp[0]=0;    

    for(int i=0;i<n;i++){
        int left=dp[i-1] + abs(heights[i] - heights[i-1]);
        int right = INT_MAX;
        if(i>1) right= dp[i-2] + abs(heights[i] - heights[i-2]);
        dp[i]= min(right,left);
    }
    return dp[n-1];
}

int main(){
    vector<int> heights;
    int index,x=0;
    cin>>index;
    for(int i=0;i<index;i++){
        cin>>x;
        heights.push_back(x);
    }
    cout<<jump(heights);
}