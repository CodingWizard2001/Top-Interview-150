// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle){
        int m = haystack.length(),n = needle.length();
        for(int i = 0;i < (m - n) + 1;i++){
            if(haystack.substr(i,n) == needle) return i;
        }
        return -1;
    }
};
int main(){
    string haystack,needle;
    cout<<"Enter string for haystack : ";
    cin>>haystack;
    cout<<"Enter string for needle : ";
    cin>>needle;
    Solution solve;
    cout<<"The index of the first occurrence of "<<needle<<" in "<<haystack<<" will be : "<<solve.strStr(haystack,needle);
}