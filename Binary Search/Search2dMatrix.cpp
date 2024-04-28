// You are given an m x n integer matrix matrix with the following two properties:
// 1. Each row is sorted in non-decreasing order.
// 2. The first integer of each row is greater than the last integer of the previous row. Given an integer target, return true if target is in matrix or false otherwise.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        if(matrix.empty()) return false;
        int m = matrix.size(),n = matrix[0].size();
        int left = 0,right = (m * n);
        while(left < right){
            const int mid = left + (right - left) / 2;
            const int i = mid / n;
            const int j = mid % n;
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target) left = mid + 1;
            else right = mid;
        }
        return false;
    }
};
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>> matrix;
    cout<<"Give input : ";
    for(int i = 0;i < rows;i++){
        vector<int>ans;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            ans.push_back(x);
        }
        matrix.push_back(ans);
    }
    cout<<"Our Matrix ->"<<endl;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    Solution solve;
    if(solve.searchMatrix(matrix,target)) cout<<"Founded";
    else cout<<"Not Founded";
}