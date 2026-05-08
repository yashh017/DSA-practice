#include<iostream>
#include<vector>
using namespace std;

int SearchInRotatedSortedArray(vector<int> &arr,int target) {
    int st = 0, n = arr.size(), en = n-1;

    while(st <= en) {
        int mid = st+(en-st)/2;

        if(arr[mid] == target) return mid;

        if(arr[st] <= arr[mid]) {
            if(target >= arr[st] && target < arr[mid]) {
                en = mid-1;
            }
            else st = mid+1;
        } 
        else {
            if(target > arr[mid] && target <= arr[en]) {
                st = mid+1;
            }
            else en = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr= {4,5,6,1,2,3};
    cout<<SearchInRotatedSortedArray(arr,5);
    return 0;
}