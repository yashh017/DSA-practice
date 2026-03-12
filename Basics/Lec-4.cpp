//Binary numbers

#include<iostream>
using namespace std;

// int decToBinary(int decinum) {
//     int ans = 0, pow = 1;

//     while(decinum > 0) {
//        int rem = decinum % 2;
//        decinum /= 2;
                                        //decimal to binary
//        ans += (rem * pow);
//        pow *= 10; 
//     }
//     return ans;
// }

// int main() {
//     int decinum = 33;

//     cout<<decToBinary(decinum)<<endl;
//     return 0;
// }


// int binryToDeci(int binnum) {
//     int ans = 0,pow = 1;

//     while(binnum > 0) {

//         int rem = binnum % 2;
//         ans += (rem * pow);             //binary to decimal

//         binnum /= 10;
//         pow *= 2;
//     }
//     return ans;
// }

// int main() {

//     cout<<binryToDeci(1011)<<endl;
//     return 0;
// }