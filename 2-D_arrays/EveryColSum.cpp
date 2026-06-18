#include<iostream>
#include<vector>
using namespace std;

int EveryColSum(int mat[][3],int row,int col) {

    for(int j = 0;j <col;j++) {
        int sum = 0;
        for(int i = 0;i < row;i++) {
            sum += mat[i][j];
        }
        cout<<"The sum of "<<j<<"th col is: "<<sum<<endl;
    }
}
int main() {
    int mat[][3] = {{2,4,3},{5,7,6},{1,9,2}};
    int row = 3;
    int col = 3;
    cout<<EveryColSum(mat,row,col);
    return 0;
}