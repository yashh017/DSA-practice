#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> Matrix(vector<vector<int>> & mat) {
    int m = mat.size();
    int n = mat[0].size();

    for(int i = 0;i < m;i++) {
        for(int j = 0;j < n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main( ) {
    vector<vector<int>> mat  = {{1,2,3},{4,5,6},{7,8,9}};
    
    return 0;
}