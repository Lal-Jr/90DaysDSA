#include<bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& m, int n, vector<string>& ans, vector<vector<int>> visited,int x, int y,string path){
    if((x = n-1) && (y = n-1)) {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    if(((x+1>=0 && x+1<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1)){
        path.push_back('D');
        solve(m,n,ans,visited,x+1, y,path);
        path.pop_back();
    }

    if(((x>=0 && x<n) && (y-1>=0 && y-1<n) && visited[x][y] == 0 && m[x][y] == 1)){
        path.push_back('L');
        solve(m,n,ans,visited,x, y-1,path);
        path.pop_back();
    }

    if(((x>=0 && x<n) && (y+1>=0 && y+1<n) && visited[x][y] == 0 && m[x][y] == 1)){
        path.push_back('R');
        solve(m,n,ans,visited,x, y+1,path);
        path.pop_back();
    }

    if(((x-1>=0 && x-1<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1)){
        path.push_back('U');
        solve(m,n,ans,visited,x-1, y,path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> searchMaze(vector<vector<int>>& arr, int n){
    vector<string> ans;

    if (arr[n - 1][n - 1] == 0 || arr[0][0] == 0) return ans;

    vector<vector<int>> visited = arr;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }

    solve(arr,n,ans,visited,0,0,"");
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<vector<int>> matrix;
    vector<string> ans;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }

    ans=searchMaze(matrix,4);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}