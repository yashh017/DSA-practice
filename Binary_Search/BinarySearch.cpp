#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// int BinaryS(int arr[],int target,int size) {
//     int st = 0;
//     int end = size - 1;
//     int mid = (st+end)/2;

//     while(st <= end) {
//         if(target > mid) {
//             st = mid+1;
//         }
//         else if (target < mid) {
//             end = mid - 1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {1,2,3,6,7,10};
//     int size = 6;
//     int target = 7;
//     cout<<BinaryS(arr,target,size);
//     return 0;
// }


// int BinarySearch(vector<int> arr, int tar) {
//     int st = 0, end = arr.size()-1;

//     while(st <= end) {
//         int mid = (st+end)/2;
        
//         if(tar > arr[mid]) {
//             st = mid+1;
//         }

//         else if (tar < arr[mid]) {
//             end = mid-1;
//         }

//         else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr = {1,3,5,6,7,12,13,22};
//     int tar = 12;
    
//     cout<<BinarySearch(arr,tar)<<endl;
// }


// int LastOccurance(vector<int>arr, int t, int n) {
//     int l = 0, r = n-1, ans = -1;

//     while(l <= r) {
//         int mid = l + (r-l)/2;

//         if(arr[mid] < t) {
//             l = mid + 1;
//         }

//         else if (arr[mid] > t) {
//             r = mid-1;

//         }
//         else {
//             ans = mid;
//             l = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {2,3,3,3,3};
//     int n = 5;
//     int t = 3;

//     cout<<LastOccurance(arr,t,n);
//     return 0;
// }


// int LastOccur(vector<int> nums,int target,int n) {
//     int start = 0, end = n-1, ans = -1;
    
//     while(start <= end) {
//          int mid = start + (end-start)/2;

//         if(nums[mid] < target) {

//             start = mid+1;
//         }

//         else if(nums[mid] > target) {
//             end = mid-1;
//         }
//         else {
//             ans = mid;
//             start = mid+1;
//         }
//     }
//     return ans;
// }


// int FirstOccur(vector<int> nums,int target,int n) {
//     int start = 0, end = n-1, ans = -1;
    
//     while(start <= end) {
//          int mid = start + (end-start)/2;

//         if(nums[mid] < target) {

//             start = mid+1;
//         }

//         else if(nums[mid] > target) {
//             end = mid-1;
//         }
//         else {
//             ans = mid;
//             end = mid-1;
//         }
//     }
//     return ans;
// }


// int CountOccur(vector<int>nums,int target,int n) {
//     int first = FirstOccur(nums,target,n);

//     if(first == -1) {
//         return 0;
//     }

//     int last = LastOccur(nums,target,n);

//     return last - first + 1;
// }


// int main() {
//     vector<int> nums = {1,2,2,2,3,4};
//     int n = 6, target = 2, count = 0;

//     cout<<CountOccur(nums,target,n);

//     return 0;
// }


// int SecondLargest(vector<int> &nums,int n) {
//     long large = nums[0];
//     long secondlarge = INT_MIN;
    
//     for(int i = 0;i < n;i++) {

//         if(nums[i] > large) {

//             secondlarge = large;
//             large = nums[i];
//         }
//         else if(nums[i] > secondlarge && nums[i] != large) {

//             secondlarge = nums[i];
//         }

//     }
//     return secondlarge;
// }

// int main() {
//     vector<int> nums = {2,1,4,7,9,6,8};
//     int n = nums.size();

//     cout<<SecondLargest(nums,n)<<endl;
//     return 0;
// }

// void Reverse(vector<int> &arr, int n) {
//     int l = 0, r = n-1;

//     while(l < r) {

//         swap(arr[l],arr[r]);

//         l++;
//         r--;

//     }
// }

// int main() {
//     vector<int> arr = {1,2,3,4,5,6};
//     int n = arr.size();

//     Reverse(arr,n);

//     cout<<"After reverse: " <<endl;

//     for(int val : arr) {

//         cout<<val<<" ";
//     }
//     return 0;
// }


// void ZeroToRight(vector<int> &nums,int n) {
//     int j = 0;
//     for(int i = 0;i < n;i++) {
//         if(nums[i] != 0) {
//             swap(nums[i],nums[j]);
//             j++;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {1,0,0,2,0};
//     int n = nums.size();

//     ZeroToRight(nums,n);

//     for(int val : nums) {
//         cout<<val<<" "; 
//     }
//     return 0;
// }

// int majorityElement(vector<int> &arr,int n) {
//     int candidate = 0;
//     int count = 0;

//     for(int val : arr) {
//         if(count == 0) {
//             candidate = val;
//         }

//         if(val == candidate) {
//             count++;
//         }
//         else {
//             count--;
//         }
//     }
//     int ans = 0;
//     for(int val : arr) {
//         if(val == candidate) {
//             count++;
//         }
//     }

//     if(count > n/2) {
//         return candidate;
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr = {2,3,2,4,2};
//     int n = arr.size();
//     cout<<majorityElement(arr,n);
//     return 0;
// }

// int MaxSubarraySum(vector<int> &nums,int n) {
//     int currentsum = 0, maxsum = INT_MIN;

//     for(int val : nums) {
//         currentsum += val;
//         maxsum = max(currentsum,maxsum);

//         if(currentsum < 0) {
//             currentsum = 0;
//         }
//     }
//     return maxsum;
// }

// int main() {
//     vector<int> nums = {-1, 4, -2, 5, -5};
//     int n = nums.size();

//     cout<<MaxSubarraySum(nums,n);
//     return 0;
// }

#include <algorithm>
using namespace std;

void reverseArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k%n;

    reverse(arr.begin(), arr.end());

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    reverseArray(arr, k);  // ✅ just call it

    for(int val : arr) {
        cout << val << " ";
    }

    return 0;
}