// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>
using namespace std;
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
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    rotate(nums,k);
    cout<<"After rotating by "<<k<<" : ";
    for(int i = 0;i < size;i++){
        cout<<nums[i]<<" ";
    }
}