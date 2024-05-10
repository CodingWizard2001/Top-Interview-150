// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target){
        int left = 0,right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target) return mid;
            if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target < nums[mid]) right = mid - 1;
                else left = mid + 1; 
            }
            else{
                if(nums[mid] < target && target <= nums[right]) left = mid + 1;
                else right = mid - 1; 
            }
        }
        return -1;
    }
};
void rotateArray(vector<int>& nums, int l,int r){
    while(l < r) swap(nums[l++],nums[r--]);
}
void rotate(vector<int>& nums, int k) {
    int n = nums.size() - 1;
    k %= n;
    rotateArray(nums,0,n);
    rotateArray(nums,0,k - 1);
    rotateArray(nums,k,n);
}
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
    int k = 2;
    cout<<"After rotating "<<k<<" times : ";
    rotate(nums,k);
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
    int target;
    cout<<endl<<"Enter the target : ";
    cin>>target;
    Solution solve;
    cout<<"The index of "<<target<<" is : "<<solve.search(nums,target);
}