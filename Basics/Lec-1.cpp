//Basic coding

#include<iostream>
using namespace std;
int main() {
    int n;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++) {
        if(n%i == 0) {
            isPrime = false;
            break;
        }
    } 
    if(isPrime == true) {
        cout<<"It is a Prime number: ";
    }
    else {
        cout<<"It is a composite number: ";
    }
    return 0;
}