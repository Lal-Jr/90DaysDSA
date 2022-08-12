#include<bits/stdc++.h>

using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>>& m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1){
        return true;
    }
    else return false;
}

void solve(vector<vector<int>>& m, int n, vector<string>& ans, vector<vector<int>>& visited,int y, int x,string path){
    if((x = n-1) && (y = n-1)) {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    int newx,newy;

    newx = x+1;
    newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('D');
        solve(m,n,ans,visited,newx,newy,path);
        path.pop_back();
    }

    newx = x;
    newy = y-1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('L');
        solve(m,n,ans,visited,newx,newy,path);
        path.pop_back();
    }

    newx = x;
    newy = y+1;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('R');
        solve(m,n,ans,visited,newx,newy,path);
        path.pop_back();
    }

    newx = x-1;
    newy = y;
    if(isSafe(newx, newy, n, visited, m)){
        path.push_back('U');
        solve(m,n,ans,visited,newx,newy,path);
        path.pop_back();
    }


    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>>& m, int n){
    vector<string> ans;

    if(m[0][0]==0) return ans;

    int srcx=0,srcy=0;

    vector<vector<int>> visited = m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }

    string path = "";
    solve(m,n,ans,visited,srcx,srcy,path);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<vector<int>> matrix;
    vector<string> ans;
    int x;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            matrix[i].push_back(x);
        }
    }
    ans=findPath(matrix,4);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}