#include<iostream>
#include<vector>

using namespace std;

// int BinarySearch(vector<int> &nums,int target){
//     int left = 0, n = nums.size(), right = n-1;                 //Binary Search

//     while(left <= right) {
//         int mid = left + (right-left)/2;

//         if(nums[mid] < target) {
//             left = mid+1;
//         }
//         else if(nums[mid] > target) {
//             right = mid-1;
//         }
//         else {
//             cout<<"The number is at index: ";
//             return mid;
//         }
//     }
//     return -1;
// }

// int main( ) {
//     vector<int> nums = {2,4,8,9,12};
//     int target = 2;
//     cout<<BinarySearch(nums,target);

//     return 0;
// }

// int FirstOccurance(vector<int> &nums,int target) {
//     int start = 0,  n = nums.size(), end = n-1, ans = -1;

//     while(start <= end) {
//         int mid = start + (end-start)/2;

//         if(nums[mid] < target) {
//             start = mid+1;
//         }
//         else if(nums[mid] > target) {
//             end =mid-1;
//         }
//         else {
//             ans = mid;
//             end = mid-1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {1,4,11,11,13,34};
//     int target;
//     for(int val : nums) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<"Enter a number to count the first occurance: ";
//     cin>>target;
//     cout<<FirstOccurance(nums,target);
//     return 0;
// }

int LastOccurance(vector<int> &nums,int target) {
    int left = 0, n = nums.size(), right = n-1, ans = -1;

    while(left <= right) {
        int mid = left + (right-left)/2;

        if(nums[mid] < target) {
            left = mid+1;
        }
        else if(nums[mid] > target) {
            right = mid-1;
        }

        else {
            ans = mid;
            left = mid+1;
        }
    }
    return ans;
}

int main() {
    vector <int> nums = {1,2,4,7,7,7,8};
    int target;
    for(int val : nums) {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Enter the number to check last occurance: ";
    cin>>target;

    cout<<LastOccurance(nums,target);
    return 0;
}