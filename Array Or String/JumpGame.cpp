// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position. Return true if you can reach the last index, or false otherwise.


#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums){
        int idx = 0;
        for(int i = 0;idx < nums.size() && idx <= i;idx++){
            i = max(i,idx + nums[idx]);
        }
        return idx == nums.size();
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Given input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution solve;
    if(solve.canJump(nums)) cout<<"We can reach the last index";
    else cout<<"We can't reach the last index";
}