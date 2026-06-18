#include<iostream>
#include<vector>
using namespace std;

int EveryRowSum(int mat[][3],int row,int col) {

    for(int i = 0;i <row;i++) {
        int sum = 0;
        for(int j = 0;j < col;j++) {
            sum += mat[i][j];
        }
        cout<<"The sum of "<<i<<"th row is: "<<sum<<endl;
    }
}
int main() {
    int mat[][3] = {{2,4,3},{5,7,6},{1,9,2}};
    int row = 3;
    int col = 3;
    cout<<EveryRowSum(mat,row,col);
    return 0;
}