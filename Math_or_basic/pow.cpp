#include<iostream>
#include<vector>

using namespace std;

double mypow(double x, int n) {
    long binform = n;
    double ans = 1;

    if(n < 0) {
        x = 1/x;
        binform = -binform;
    }

    while(binform > 0) {
        if(binform % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main() {
    double x = 3;
    int n = 8;
    cout<<mypow(x,n);
}