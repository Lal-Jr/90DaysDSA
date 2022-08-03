#include<bits/stdc++.h>

using namespace std;

bool jump(vector<int>& heights){
    int n = heights.size();
    vector<vector<bool>> dp(n,vector<bool>(n+1,false));
    dp[0][0] = true;

    for(int i=0;i<=n;i++){
        for(int j=i-1;j>=0;j--){
            int k = heights[i] - heights[j];
            if(j+1<k) break;
            dp[i][k] = dp[j][k-1] or dp[j][k] or dp[j][k+1];
            if(i==n-1 and  dp[i][k]) return true;
        }
    }
    return false;
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