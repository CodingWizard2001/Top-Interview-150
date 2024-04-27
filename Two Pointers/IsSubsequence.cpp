// Given two strings s and t, return true if s is a subsequence of t, or false otherwise. A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t){
        if(s.empty()) return true;
        int i = 0;
        for(const char c : t){
            if(s[i] == c && ++i == s.length()) return true;
        }
        return false;
    }
};
int main(){
    string s,t;
    cout<<"Enter string for S : ";
    cin>>s;
    cout<<"Enter string for T : ";
    cin>>t;
    Solution solve;
    if(solve.isSubsequence(s,t)) cout<<s<<" is a subsequence of "<<t;
    else cout<<s<<" is not a subsequence of "<<t;
}