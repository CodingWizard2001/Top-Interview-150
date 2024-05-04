// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }
    }
};
int main(){
    int m;
    vector<int>nums1;
    cout<<"Enter the size of the array : ";
    cin>>m;
    cout<<"Give input for first array : ";
    for(int i = 0;i < m;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    int n;
    vector<int>nums2;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Give input for second array : ";
    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    Solution solve;
    solve.merge(nums1,m,nums2,n);
    cout<<"After merge it will be : ";
    for(int i = 0;i < (m + n);i++){
        cout<<nums1[i]<<" ";
    }
}