#include<iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int> &array) {
    int n = array.size();
    int IsSwap = false;
    
    for(int i =0; i < n-1;i++) {
        for(int j = 0;j < n-i-1;j++) {

            if(array[j] > array[j+1]) {
                swap(array[j],array[j+1]);
                IsSwap = true;
            }
        }
        if(!IsSwap)
            return;
    }
}

int main() {
    vector<int> array = {1,3,2,7,5};
    BubbleSort(array);
    for(int val : array) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}