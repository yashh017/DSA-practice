#include<iostream>
#include<climits>
using namespace std;


pair<int,int> LinearSearch(int matrix[3][3],int row, int column, int key) {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < column;j++) {
            if(matrix[i][j] ==key) {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int column = 3;

    pair<int, int> pos = LinearSearch(matrix, 3, 3, 5);

    cout << "Row: " << pos.first << ", Column: " << pos.second << endl;

    return 0;
}