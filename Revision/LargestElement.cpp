#include<iostream>
#include<vector>
using namespace std;

//Largest element in vector array
int LargestElement(vector<int> &nums) {

    int n = nums.size();
    int left=0;
    int right=n-1;
    int ans=0;

    while(left < right) {
        if(nums[left] > nums[right]) {
            right--;
            ans=nums[left];
        }
        else if(nums[right] > nums[left]) {
            left++;
            ans=nums[right];
        }
        else {
            right--;
            left++;
        }
    }
    return ans;
}

int main() {
    vector <int> nums={1,3,3,9,7,6};
    cout<<LargestElement(nums);

    return 0;
}