#include<iostream>
#include<vector>
using namespace std;



bool BinarySearch(vector<vector<int>> &mat,int target,int row) {
    int st = 0, n = mat[0].size(), end = n-1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        if(mat[row][mid] == target) {
            return true;
        }
        else if(target > mat[row][mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}

bool SearchIn2DMatrix(vector<vector<int>> &mat,int target) {
    int m = mat.size(), n = mat[0].size();          // m is no. of rows & n is no. cols
    int StRow = 0, EndRow = m-1;

    while(StRow <= EndRow) {
        int MidRow = StRow + (EndRow - StRow)/2;

        if(target >= mat[MidRow][0] && target <= mat[MidRow][n-1]) {
            return BinarySearch(mat,target,MidRow);
        }
        else if(target > mat[MidRow][n-1]) {
            StRow = MidRow + 1;
        }
        else {
            EndRow = MidRow - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> mat = {{2,4,5},{11,16,20},{22,24,29}};
    int target = 20;
    cout<<SearchIn2DMatrix(mat,target);
}