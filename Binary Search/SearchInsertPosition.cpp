// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int left = 0,right = nums.size() - 1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid;
        }
        return left;
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
    cout<<"The index where "<<target<<" would be if it were inserted in order :  "<<solve.searchInsert(nums,target);
}