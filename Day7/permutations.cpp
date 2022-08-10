#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>& nums,vector<vector<int>>& ans,int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
        
    
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        swap(nums[j],nums[index]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    solve(nums,ans,0);
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
    ans=permute(nums);
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