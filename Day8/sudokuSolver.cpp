#include<bits/stdc++.h>

using namespace std;

bool isSafe(int r, int c, vector<vector<char>> board, char val){
    for(int i=0; i<9;i++){
        if(board[i][c]==val){
            return false;
        }
        if(board[r][i]==val){
            return false;
        }
        if(board[3* (r/3)+ i/3][3*(c/3) + i%3]==val){
            return false;
        }
    }
    return true;
}
    
bool solveSudoku(vector<vector<char>>& board){
    int n=board.size();
    for(int row=0; row<n;row++){
        for(int col=0; col<n;col++){
            if(board[row][col]=='.'){
                for(char val= '1'; val <= '9'; val++){
                    if(isSafe(row,col,board,val)){
                        board[row][col]=val;
                        bool ans = solveSudoku(board);
                        if(ans){
                            return true;
                        }
                        else{
                            board[row][col]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]];
    cout<<solveSudoku(board);
}