#include<iostream>
#include<climits>
using namespace std;

int MaxRowSum(int matrix[][3],int row,int col) {
    int maxsum = INT_MIN;

    for(int i = 0;i < row;i++) {
        int currsum = 0;
        for(int j = 0;j < col;j++) {                            //maximum row sum
            currsum += matrix[i][j];
        }
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}

int main() {
    int matrix[][3] = {{1,3,-1},{5,4,0},{9,-5,1}};
    int row = 3;
    int col = 3;
    cout<<MaxRowSum(matrix,row,col);
    return 0;
}