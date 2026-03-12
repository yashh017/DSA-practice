#include<iostream>
#include<climits>

using namespace std;

// int main() {

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     int max_sum = INT_MIN;

//     for(int st = 0;st < n;st++) {

//         int curr_sum = 0;
//         for(int end = st; end < n; end++) {

//             curr_sum += arr[end];
//             max_sum = max(max_sum,curr_sum);
//         }
//     }
//     cout<<"The maximum sub-array sum is: "<<max_sum<<endl;
//     return 0;
// }



int main() {
    int n = 5;

    for(int i = 0;i < n;i++) {

        for(int j = 0;j < n-i;j++) {
            cout<<" ";
        }
        cout<<"*";

        if(i != 0) {
            for(int j = 0;j < 2*i-1;j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }

    for(int i = 0;i < n-1;i++) {

        for(int j = 0;j <i+1;j++) {
            cout<<" ";
        }

        cout<<"*";

        if(i != n-1) {

            for(int j = 0;j < 2*(n-i)-5;j++) {
                cout<<".";
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}