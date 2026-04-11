#include<iostream>
#include<vector>

using namespace std;

void DnfAlgorithm(vector<int> &arr) {
    int low = 0, mid = 0, n = arr.size(), high = n-1;
    
    while(mid <= high) {
        int temp;
        if(arr[mid] == 0) {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else if(arr[mid] == 2) {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }

    }
}
int main() {
    vector<int> arr = {1,2,0,0,1,2};
    cout<<"Before applying algorithm: ";
    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"After applying algorithm: ";
    DnfAlgorithm(arr);
    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}