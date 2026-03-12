#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int linearS(int arr[],int s, int target) {
//     for(int i = 0;i < s;i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;    
// }

// int main() {
//     int arr[] = {2,4,1,9,3,7,6,8};
//     int s = 8;
//     int target = 6;
//     cout<<linearS(arr,s,target)<<endl;
//     return 0;
// }

// int reverse(int arr[],int s) {
//     int l = 0, r = s-1;

//     while(l < r) {
//         swap(arr[l],arr[r]);
//         l++;
//         r--;
//     }

// }

// int main() {
//     int arr[] = {1,3,2,8,7};
//     int s = 5;

//     reverse(arr,s);
//     for(int i = 0;i <s;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// int main() {
//     vector<int> vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity();
//     return 0;
    
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
    
//     for(int st = 0; st < n; st++) {
//         for(int end = st; end < n; end++) {
//             for(int i = st;i <= end; i++) {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int arr[5] = {1,2,-3,-4,5};
//     int n = 5;

//     int maxsum = INT_MIN;

//     for(int st = 0; st < n; st++) {
//         int currentsum = 0;
//         for(int end = st; end < n; end++) {
//             currentsum += arr[end];
//             maxsum = max(currentsum,maxsum);
//         }
//     }
//     cout<<"Max subarray sum is: "<<maxsum<<endl;
//     return 0;
// }

// int main() {
//     int arr[5] = {-2,6,-9,4,3};
//     int n = 5;
//     int maxsum = INT_MIN;

//     for(int st = 0; st < n; st++) {
//         int currentsum = 0;
//         for(int end = st; end < n; end++) {
//              currentsum += arr[end];
//             maxsum = max(currentsum,maxsum);
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }


// int main() {
//     int arr[5] = {-2,6,-9,4,3};
//     int n = 5;
//     int maxsum = INT_MIN, currsum = 0;

//     for(int val : arr) {
//         currsum += val;
//         maxsum = max(currsum,maxsum);
//     }
//     cout<<maxsum;
// }


// int main() {
//     int n = 5;
//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j >0; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main() {
//     int n = 5;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             cout<<" ";
//         }
//         for(int j = 0; j < i+1; j++) {
//             cout<<"*";
//         }
//         for(int j = i; j > 0; j--) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main() {
//     int n =4;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<"*";

//         if(i != 0) {
//             for(int j = 0; j < 2*i-1; j++) {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//     for(int i = 0; i < n-1; i++) {

//         for(int j = 0; j < i+1; j++) {
//             cout<<" ";
//         }

//         cout<<"*";

//         if(i != n-2) {

//             for(int j = 0; j < 2*(n-i)-5; j++) {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main() {
//     int n = 5;

//     for(int i = 0; i < n; i++) {

//         for(int j = 0; j <i+1; j++) {
//             cout<<"*";
//         }

//         for(int j = 0; j < 2*(n-i)-2; j++) {
//             cout<<" ";
//         }

//         for(int j = 0; j <i+1; j++) {
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n-i; j++) {
//             cout<<"*";
//         }

//         if(i != 0) {

//             for(int j = 0; j < 2*(i); j++) {
//             cout<<" ";
//         }

//         }

//         for(int j = 0; j < n-i; j++) {
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     return 0;
// }


// vector<int> pairsum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();

//     for(int i = 0;i < n; i++) {
//         for(int j = i+1; j < n; j++) {

//             if(nums[i]+nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int> nums = {1,3,4,2,7,8};
//     int n = 6, target = 10;

//     vector<int> ans = pairsum(nums,target);
//     cout<< ans[0]<<", "<<ans[1]<<endl;    
//     return 0;
// }

// vector<int>pairsum(vector<int> nums, int target) {
//     int n = nums.size();
//     int i = 0, j = n-1;
//     vector<int> ans;


//     while(i < j) {
//         int sum = nums[i]+nums[j];

//         if(sum < target) {
//             i++;
//         }
//         else if (sum > target) {
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

// int  main() {
//     vector<int> nums = {2,3,6,8,9,10};
//     int target = 12;

//     vector<int> ans = pairsum(nums,target);

//     cout<<ans[0]<<", "<<ans[1]<<endl;
//     return 0;
// }


// vector<int>pairsum(vector<int>nums, int target) {
//     vector<int>ans;
//     int n = nums.size(),i = 0, j = n-1;

//     while(i < j) {
//         int sum = nums[i]+nums[j];

//         if(sum < target) {
//             i++;
//         }
//         else if (sum > target) {
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
//     vector<int>nums = {2,5,7,8,9};
//     int target = 13;

//     vector<int>ans = pairsum(nums,target);

//     cout<<ans[0]<<", "<<ans[1]<<endl;

//     return 0;
// }


