// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.


#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height){
        int n = height.size();
        int left = 0,right = n - 1;
        int maximum = 0;
        while(left < right){
            int ans = min(height[left],height[right]);
            maximum = max(maximum,ans * (right - left));
            if(height[left] < height[right]) ++left;
            else --right;
        }
        return maximum;
    }
};
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    vector<int>height;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }
    Solution solve;
    cout<<"The maximum amount of water a container can store is : "<<solve.maxArea(height);
}