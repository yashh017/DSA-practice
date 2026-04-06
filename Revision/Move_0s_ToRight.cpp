#include<iostream>
#include<vector>

using namespace std;

void MoveAllZeros(vector<int> &arr) {
    int j = 0, i = 0;

    for(int val : arr) {
        if(val != 0) {
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        else {
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1,3,2,0,0,5,0};
    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    MoveAllZeros(arr);
    cout<<"After applying logic:\n";

    for(int val : arr) {
        cout<<val<<" ";
    }
    return 0;
}