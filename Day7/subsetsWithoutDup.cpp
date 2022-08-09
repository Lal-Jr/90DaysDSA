#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &nums, vector<int> &output, int index, vector<vector<int>> &ans){
    ans.push_back(output);
    
    for(int i=index;i<nums.size();i++){
        if(i!=index && nums[i]==nums[i-1]) continue;
        
        output.push_back(nums[i]);
        solve(nums,output,i+1,ans);
        
        output.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    
    sort(nums.begin(), nums.end());
    
    solve(nums,output,0,ans);
    
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
    ans=subsetsWithDup(nums);
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