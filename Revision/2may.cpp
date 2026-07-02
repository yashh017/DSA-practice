#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void MoveZeros(vector<int> &arr) {
//    int i=0,j=0;
   
//    for(int val : arr) {
//     if(val != 0) {
//         swap(arr[i],arr[j]);
//         i++;
//         j++;
//     }
//     else {
//         j++;
//     }
//    }
// }
// int main() {
//     vector<int> arr = {1,0,0,2,3,0};
//     cout<<"Array before logic:\n";
//     for(int val : arr) {
//         cout<<val<<" ";
//     }
//     MoveZeros(arr);
//     cout<<"\nArray after logic:\n";
//     for(int val : arr) {
//         cout<<val<<" ";
//     }
//     return 0;
// }

// int MaxSubArraySumSizeK(vector<int> &nums) {
//     int k = 3, wind_sum = 0;

//     for(int i = 0;i < k;i++) {
//         wind_sum += nums[i];
//     }
//     int maxi = wind_sum;

//     for(int i = k;i <nums.size();i++) {
//         wind_sum += nums[i];
//         wind_sum -= nums[i-k];

//         maxi = max(maxi,wind_sum);
//     }
//     return maxi;
// }
// int main() {
//     vector<int> nums = {4,0,8,1,13};
//     cout<<MaxSubArraySumSizeK(nums);
//     return 0;
// }

// pair<int,int> SubarraySumK(vector<int> &nums, int k) {
//     int i = 0, window_sum = 0;

//     for(int j = 0; j < nums.size(); j++) {
//         window_sum += nums[j];

//         while(window_sum > k) {
//             window_sum -= nums[i];
//             i++;
//         }

//         if(window_sum == k) {
//             return {i, j};  // return indices
//         }
//     }

//     return {-1, -1}; // not found
// }

// int main() {
//     vector<int> nums = {1,2,3,7,5};
//     pair<int,int> ans = SubarraySumK(nums,3);
//     if(ans.first != -1) {
//         for(int i = ans.first;i <= ans.second;i++){
//             cout<<nums[i]<<" ";
//         }
//     }
//     else {
//         cout<<"No subarray found.";
//     }
//     return 0;
// }

// void ReverseStringK(vector<int> &nums,int k) {
//     int n = nums.size();
//     k = k%n;

//     reverse(nums.begin(),nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k,nums.end());

// }

// int main() {
//     vector<int> nums = {1,2,3,4,5};

//     for(int val : nums) {
//         cout<<val<<" ";
//     }
//     cout<<"\nAfter applying logic:\n";
//     ReverseStringK(nums,2);

//     for(int val : nums) {
//         cout<<val<<" ";
//     }
//     return 0;
// }