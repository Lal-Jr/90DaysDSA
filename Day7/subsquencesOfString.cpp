#include <bits/stdc++.h>

using namespace std;

void solve(vector<string>& nums,vector<string> output, vector<vector<string>>& ans, int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }

    solve(nums,output,ans,index+1);
    output.push_back(nums[index]);
    solve(nums,output,ans,index+1);
}

vector<vector<string>> subsets(vector<string>& nums){
    vector<vector<string>> ans;
    vector<string> output;
    solve(nums,output,ans,0);
    return ans;
}

int main(){
    vector<string> arr;
    vector<vector<string>> ans;
    int n=3;
    string x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    ans=subsets(arr);
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