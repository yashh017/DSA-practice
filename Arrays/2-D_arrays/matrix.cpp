#include<iostream>
#include<utility>
#include<climits>
using namespace std;

// int main() {
//     int matrix[3][4];
//     int rows  = 3;
//     int columns = 4;

//     cout<<"Enter the elements for 4x3 matrix:\n";

//     for(int i = 0;i < rows;i++) {
//         for(int j = 0;j < columns;j++) {
//             cin>>matrix[i][j];
//         }
//     }

//     cout<<"\nThe matrix is:\n";
//     for(int i = 0;i < rows;i++) {
//         for(int j = 0;j < columns;j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



int diagonalSum(int mat[][3],int n) {
   
    int sum = 0;
    for(int i = 0;i < n;i++) {
       sum += mat[i][i];

       if(i != n-1-i) {
        sum += mat[i][n-1-i];
       }
    }
    return sum;
}
int main() {
    int mat[][3] = {{3,2,4},{7,3,1},{9,6,2}};
    int n = 3;
    cout<<diagonalSum(mat,n);
    return 0;
}


