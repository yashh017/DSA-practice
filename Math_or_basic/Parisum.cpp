#include<iostream>
#include<vector>
using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
//     for(int i = 0;i < n;i++) {              //BRUTE FORCE APPROACH
//         for(int j = i+1;j < n;j++) {
//             if(nums[i]+nums[j]==target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }
// int main() {
//     vector<int> nums = {1,2,4,3,6};
//     int target = 9;
//     vector<int> ans = pairSum(nums, target);
//     cout<<ans[0]<<", "<<ans[1]<<endl;
//     return 0;
// }


// vector<int> PairSum(vector<int>nums, int target) {
//     vector<int>ans;
//     int n = nums.size();
//     int i = 0, j = n-1;
//     while(i < j) {
//         int ps = nums[i] + nums[j];
//         if(ps < target) {
//             i++;
//         }
//         else if(ps > target) {              //two pointers approach
//             j--;
//         }
//         else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int>nums = {1,3,4,6,9};
//     int target = 10;

//     vector<int> ans = PairSum(nums, target);
//     cout<<ans[0]<<", "<<ans[1]<<endl;
//     return 0;
// }

