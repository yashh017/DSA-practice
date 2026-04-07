#include<iostream>
#include<vector>

using namespace std;

// void BubbleSort(vector<int> &array) {
//     int n = array.size();
//     int IsSwap = false;

//     for(int i =0; i < n-1;i++) {
//         for(int j = 0;j < n-i-1;j++) {                  //n-i-1 means, no. of comparisons done in one iteration.

//             if(array[j] > array[j+1]) {
//                 swap(array[j],array[j+1]);
//                 IsSwap = true;
//             }
//         }
//         if(!IsSwap)
//             return;
//     }
// }

// int main() {
//     vector<int> array = {1,3,2,7,5};
//     BubbleSort(array);
//     for(int val : array) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// void SelectionSort(vector<int>&nums) {
//     int n = nums.size();

//     for(int i = 0;i < n-1;i++) {
//         int smallIndex = i;

//         for(int j = i+1;j < n;j++) {
//             if(nums[j] < nums[smallIndex]) {
//                 smallIndex = j;
//             }
//             swap(nums[i],nums[smallIndex]);
//         }
//     }
// }

// int main() {
//     vector<int> nums = {1,3,4,5,3,6};
//     cout<<"Array before selection sort: ";
//     for(int val : nums) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     SelectionSort(nums);
//     cout<<"After applying selection sort:\n";
//     for(int val : nums) {
//         cout<<val<<" ";
//     }
//     return 0;
// }

void InsertionSort(vector<int> &nums) {
    int n = nums.size();

    for(int i = 1;i < n;i++) {
        int current = nums[i];
        int previous = i-1;

        while(previous >= 0 && nums[previous] > current) {
            nums[previous+1] = nums[previous];
            previous--;
        }
        nums[previous+1] = current;
    }
}

int main() {
    vector<int> nums = {2,3,1,2,4,5,9};

    for(int val : nums) {
        cout<<val<<" ";
    }
    cout<<endl;
    InsertionSort(nums);

    cout<<"After applying insertion sort: ";
    for(int val : nums) {
        cout<<val<<" ";
    }
    return 0;
}