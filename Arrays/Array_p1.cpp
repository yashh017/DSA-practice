#include<iostream>
#include <climits>
using namespace std;

// int main() {
//     int marks[5] = {99,54,77,88,54};
//     for(int i = 0;i < 5;i++) {
//         cout<<marks[i]<<" ";
//     }
//     cout<<"\n";
//     cout<<sizeof(marks)/sizeof(int);            //calculate no. of elements
// }


//FIND THE SMALLEST NUMBER IN ARRAY
// int main() {
//     int arr[] = {212,2,11,43,1,0};
//     int n = 6;
//     int smallest = INT_MAX;
//     for(int i = 0;i < n;i++) {
//         smallest = min(arr[i],smallest);
//     }
//     cout<<"Smallest num: "<<smallest<<endl;
//     return 0;
// }

// int linear_s(int arr[],int n, int target) {
//     for(int i = 0;i < n;i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {4,2,7,8,1,5};
//     int n = 6;
//     int target = 8;
//     cout<<linear_s(arr, n, target)<<endl;
//     return 0;
// }

void reverse(int arr[],int s) {
    int start = 0, last = s-1;

    while(start < last) {
        swap(arr[start], arr[last]);
        start++;
        last--;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int s = 9;
    reverse(arr,s);

    for(int i = 0;i < s;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}