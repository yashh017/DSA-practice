#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &nums,int target,int st,int end) {
    if(st <= end) {
        int mid = st + (end - st)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) return BinarySearch(nums,target,mid+1,end);
        else return BinarySearch(nums,target,st,mid-1);
    }
    return -1;
}

int Search(vector<int> & nums,int target) {
    return BinarySearch(nums,target,0,nums.size()-1);
}

int main() {
    vector<int> nums = {1,3,5,8,9};
    int target = 3;
    cout<<Search(nums,target);
}
