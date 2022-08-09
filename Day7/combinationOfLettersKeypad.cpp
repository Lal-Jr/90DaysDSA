#include<bits/stdc++.h>

using namespace std;

void findCombination(string digits,vector<string>& ans,string output,int index,string keypadArr[]){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }        
        
    int digit = digits[index] - '0';
    string keys = keypadArr[digit];
        
    for(int i=0;i<keys.length();i++){
        output.push_back(keys[i]);
        findCombination(digits,ans,output,index+1,keypadArr);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.length() <=0) return ans;
    string output;
    string keypadArr[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    findCombination(digits,ans,output,0,keypadArr);
    return ans;
}

int main(){
    string digits;
    vector<string> ans;
    cin>>digits;
    ans=letterCombinations(digits);
    for(int i=0; i < ans.size(); i++)
    cout << ans.at(i) << ' ';
}