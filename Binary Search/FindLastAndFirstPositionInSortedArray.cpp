// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1].

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        vector<int>result(2,-1);
        int n = nums.size();
        int left = 0,right = n - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                result[0] = mid;
                right = mid - 1;
            }
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        left = 0,right = n - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                result[1] = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return result;
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    Solution solve;
    vector<int>result = solve.searchRange(nums,target);
    cout<<"The starting and ending position of a given "<<target<<" value are : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}