//Functions

#include<iostream>
using namespace std;

// int sum(int a,int b) {
//     int s = a+b;
//     return s;
// }

// int main() {

//     cout<<sum(5,5)<<endl;

//     return 0;
// }

// int minOfTwo(int a, int b) {
//     if(a <= b) {
//         cout<<"A is minimum"<<endl;
//         return a;
//     }
//     else{
//         cout<<"B is minimum"<<endl;
//         return b;
//     }
// }

// int main() {
//     cout<<"Minimum: "<<minOfTwo(4,7)<<endl;
//     return 0;
// }

// int SumN(int n) {
//     int sum = 0;

//     for(int i = 0;i <= n;i++) {
//         sum += i;
//     }
//     return sum;
// }

// int main() {
//     cout<<SumN(4)<<endl;
//     cout<<SumN(5)<<endl;
//     return 0;
// }

// int Fact(int n) {
//     int fac = 1;

//     for(int i = 1;i <=n;i++) {
//         fac *= i;
//     }
//     return fac;
// }

// int main() {
//     cout<<Fact(6)<<endl;
//     cout<<Fact(4)<<endl;
//     return 0;
// }


//PASS BY VALUE

// void changeX(int x) {
//     x = 2*x;
//     cout<<"X: "<<x<<endl;
// }

// int main() {
//     int x = 4;
//     changeX(x);
//     cout<<"x: "<<x<<endl;
//     return 0;
// }

// int SepSum(int num) {
//     int digitsum = 0;

//     while(num > 0) {
//         int lastDig = num % 10;
//         num /= 10;
//         digitsum += lastDig;
//     }
//     return digitsum;
// }

// int main() {

//     cout<<"The sum of digits in number is: "<<SepSum(1335)<<endl;
//     return 0;
// }

// void Prime(int n) {
//     if(n % 2 == 0) {
//         cout<<"It is Prime number";
//     }
//     else {
//         cout<<"It's not a Prime number";
//     }
// }

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     Prime(n);
// }
 
// void Nprime(int n) {
//     int count = 0;
//     for(int i = 0;i <= n;i++) {

//         if(count % 2 == 0) {
//             cout<<count<<"\n";
//         }
//         count += 1;
//     }
// }

// int main() {
//     int n = 6;
//     Nprime(n);
// }

int Fibonacci(int n) {
    int count = 1,sum = 0;

    for(int i = 1;i <= n;i++) {
        sum += count;
        count += 1;
    }
    return sum;
}

int main() {
    int n = 8;
    cout<<"Fibonacci series from 1 to 8(N): "<<Fibonacci(n);
    return 0;
}