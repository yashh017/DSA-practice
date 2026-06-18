#include<iostream>
#include<climits>
using namespace std;


int MaxRowSum(int matrix[][3],int row,int col) {
    int maxsum = INT_MIN;

    for(int j = 0;j < col;j++) {
        int currsum = 0;
        for(int i = 0;i < row;i++) {                            //maximum col sum
            currsum += matrix[i][j];
        }
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}

int main() {
    int matrix[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    cout<<MaxRowSum(matrix,row,col);
    return 0;
}
