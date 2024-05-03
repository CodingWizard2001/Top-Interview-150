// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle){
        int m = haystack.size(),n = needle.size();
        for(int i = 0;i < (m - n) + 1;i++){
            if(haystack.substr(i,n) == needle) return i;
        }
        return -1;
    }
};
int main(){
    string haystack,needle;
    cout<<"Enter haystack string : ";
    cin>>haystack;
    cout<<"Enter needle string : ";
    cin>>needle;
    Solution solve;
    cout<<"The index of the first occurrence of "<<needle<<" in "<<haystack<<" is : "<<solve.strStr(haystack,needle);
}