// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        // First Transpose
        for(int i = 0;i < n;i++){
            for(int j = (i + 1);j < n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        // Second Rotate
        for(int k = 0;k < n;k++){
            int i = 0,j = n - 1;
            while(i < j){
                int temp = matrix[k][i];
                matrix[k][i] = matrix[k][j];
                matrix[k][j] = temp;
                i++;
                j--;
            }
        }
    }
};
int main(){
    int row;
    cout<<"Enter the size of the matrix : ";
    cin>>row;
    vector<vector<int>>matrix;
    cout<<"Give Input : ";
    for(int i = 0;i< row;i++){
        vector<int>v;
        for(int j = 0;j < row;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }
    cout<<"Before rotating : "<<endl;
    for(int i = 0;i< row;i++){
        for(int j = 0;j < row;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    Solution solve;
    solve.rotate(matrix);
    cout<<endl<<"After rotating : "<<endl;
    for(int i = 0;i< row;i++){
        for(int j = 0;j < row;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}