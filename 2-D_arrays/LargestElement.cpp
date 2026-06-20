#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> LargestElement(vector<vector<int>> &mat,int row,int col) {

    int MaxInt = INT_MIN;
    int maxrow, maxcol;
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            if(MaxInt < mat[i][j]) {
                MaxInt = mat[i][j];
                maxrow = i;
                maxcol = j;
            }
        }
    }
    return {MaxInt,maxrow,maxcol};   
}

int main() {
    vector<vector<int>> mat = {{2, 4, 3},{5, 7, 6},{1, 9, 2}};
    int row = 3;
    int col = 3;
    vector<int> ans = LargestElement(mat,row,col);
    cout<<"Maximum number: "<<ans[0]<<endl;
    cout<<"Row: "<<ans[1]<<endl;
    cout<<"Columns: "<<ans[2]<<endl;
    return 0;
}