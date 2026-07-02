#include<iostream>
#include<vector>
#include<string>
using namespace std;

// int MaximumSubarraySum(vector<int> &nums,int k) {
//     int maxsum = nums[0], sum = 0;
//     for(int val : nums) {
//         sum += val;
//         maxsum = max(maxsum, sum);
//         if(sum < 0) sum = 0;
//     }
//     return maxsum;
// }

// int main() {
//     vector<int>nums = {3,1,4,-5,2,0};
//     cout<<MaximumSubarraySum(nums, 5);
//     return 0;
// }


// int LongestSubstring(string s) {
//     vector<int> freq(256,0);

//     int i = 0, j = 0, maxlength = 0;
//     while(j < s.length()) {
//         freq[s[j]]++;
        
//         while(freq[s[j]] > 1) {
//             freq[s[i]]--;
//             i++;
//         }
//         maxlength = max(maxlength,j-i+1);
//         j++;
//     }
//     return maxlength;
// }
// int main() {
//     string s = "abcdacb";
//     cout<<LongestSubstring(s);
//     return 0;
// }

bool isvowel(char ch) {
    return  (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u');
}

int SlidingWindow(string &s,int k) {
    int maxvowel=0, vowelcount = 0;

    for(int i = 0;i < k;i++) {
        if(isvowel(s[i])) {
            vowelcount++;
        }
    }
    maxvowel = vowelcount;

    for(int i = k;i < s.length();i++) {
        if(isvowel(s[i])) {
            vowelcount++;
        }
        if(isvowel(s[i-k])) {
            vowelcount--;
        }
        maxvowel = max(maxvowel,vowelcount);
    }
    return maxvowel;
}

int main() {
    string s = "spacex";
    cout<<SlidingWindow(s,3);
    return 0;
}
