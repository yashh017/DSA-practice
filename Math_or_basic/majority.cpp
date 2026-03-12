#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>nums) {
    int n = nums.size(), freq = 0, ans = 0, count = 0;

    for(int i = 0;i < n;i++) {

        if(freq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            freq++;
        }

        else {
            freq--;
        }
    }

    for(int val : nums) {

        if(val == ans) {
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    }
    else {

        return -1;
    
    }
    return ans;
}

int main() {
    vector<int> nums = {3,3,2,3,3,4};
    int n = 6;
    cout<<"The majority element is: ";
    cout<<majority(nums);
}
