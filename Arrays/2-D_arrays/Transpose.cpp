#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Transpose(vector<vector<int>> &mat1) {

    int m = mat1.size();
    int n = mat1[0].size();

    vector<vector<int>> ans(n, vector<int>(m));

    for(int i = 0; i < m; i++) {

        for(int j = 0; j < n; j++) {

            ans[j][i] = mat1[i][j];
        }
    }

    return ans;
}
int main() {
    vector<vector<int>> mat1 = {{1,2,3},{4,5,6}};

    cout<<"Given matrix: "<<endl;
    for(int i = 0;i < mat1.size();i++) {
        for(int j = 0;j < mat1[0].size();j++) {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose matix: "<<endl;
    vector<vector<int>> ans = Transpose(mat1);

    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[0].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}