// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers. Given a string s, return true if it is a palindrome, or false otherwise.

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s){
        int left = 0,right = s.length() - 1;
        while(left < right){
            if(!isalnum(s[left])) left++;
            else if(!isalnum(s[right])) right--;
            else if(tolower(s[left]) != tolower(s[right])) return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    Solution solve;
    if(solve.isPalindrome(s)) cout<<"Valid palindrome";
    else cout<<"Not a valid palindrome";
}