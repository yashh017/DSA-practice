#include<iostream>
#include<vector>
using namespace std;

// int DiagonalSum(vector<vector<int>> &mat) {
//     int n = mat.size();
//     int sum = 0;
//     for(int i = 0;i < n;i++) {
//         sum += mat[i][i];
//         sum += mat[i][n-1-i];
//     }
//     if(n%2 == 1) {
//             sum-= mat[n/2][n/2];
//     }
//     return sum;
// }

bool BinarySearch(vector<vector<int>> &mat,int target,int row) {
    int n = mat.size();
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = start + (end - start)/2;
        if(mat[row][mid] == target) return true;
        else if(target > mat[row][mid]) start = mid + 1;
        else if(target < mat[row][mid]) end = mid - 1;
    }
    return false;

}


bool SearchInMatrix(vector<vector<int>> &mat,int target) {
    int m = mat.size();
    int n = mat[0].size();
    int strow = 0;
    int endrow = m-1;

    while(strow <= endrow) {
        int midrow = strow + (endrow - strow)/2;
        if(target >= mat[midrow][0] && target <= mat[midrow][n-1]) return BinarySearch(mat,target,midrow);
        else if(target > mat[midrow][n-1]) strow = midrow + 1;
        else if(target < mat[midrow][0]) endrow = midrow - 1;
    }
    return false;

}
int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 10;
    int ans = SearchInMatrix(mat,target);
    cout<<ans;
    return 0;
}