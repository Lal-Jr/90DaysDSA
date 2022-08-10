#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>& nums,vector<int> output, vector<vector<int>>& ans, int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }

    solve(nums,output,ans,index+1);
    output.push_back(nums[index]);
    solve(nums,output,ans,index+1);
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums,output,ans,0);
    return ans;
}

int main(){
    vector<int> nums;
    vector<vector<int>> ans;
    int x,n=3;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    ans=subsets(nums);
    for (int i = 0; i < ans.size(); i++){
        cout<<"[";
        for (int j = 0; j < ans[i].size(); j++){
            if(j==(ans[i].size()-1))
                cout<<ans[i][j];
            else cout <<ans[i][j]<<",";
        }
        if(i==(ans.size()-1))
            cout<<"]";
        else cout<<"],";
    }   
}