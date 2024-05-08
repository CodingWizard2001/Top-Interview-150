// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    void generate(vector<string>&ans,string s,int open,int close,int n){
        if(close == n){
            ans.push_back(s);
            return;
        }
        if(open < n) generate(ans,s + '(',open + 1,close,n);   
        if(close < open) generate(ans,s + ')',open,close + 1,n);   
    }
    vector<string>generateParenthesis(int n){
        vector<string>ans;
        generate(ans,"",0,0,n);
        return ans;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution solve;
    cout<<"All Combinations are : ";
    vector<string>result = solve.generateParenthesis(n);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}