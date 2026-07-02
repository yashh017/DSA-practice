#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Transpose(vector<vector<int>> &mat1) {

    int m = mat1.size();
    int n = mat1[0].size();

    //vector<vector<int>> ans(n, vector<int>(m));

    for(int i = 0; i < m; i++) {

        for(int j = i+1; j < n; j++) swap(mat1[i][j],mat1[j][i]);
    }

    return mat1;
}
int main() {
    vector<vector<int>> mat1 = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Given matrix: "<<endl;
    for(int i = 0;i < mat1.size();i++) {
        for(int j = 0;j < mat1[0].size();j++) {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose matix: "<<endl;
    vector<vector<int>> mat = Transpose(mat1);

    for(int i = 0;i < mat.size();i++) {
        for(int j = 0;j < mat[0].size();j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}