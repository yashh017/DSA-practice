#include<iostream>

using namespace std;

// int main() {
//     int a = 10;
//     int *ptr = &a;

//     int ** ptr2 = &ptr;

    // cout<<"Dereferencing through ptr: "<<*(ptr)<<endl;
    
    // cout<<"This is the address of a: "<<ptr<<endl;    // ptr stores address of a
    // cout<<"This is the address of ptr: "<<&ptr<<endl;   //address of pointer

    // cout<<"Dereference through ptr2: "<<**ptr23;

    // cout<<endl<<*(&a)<<endl;        //dereference opr 
    // return 0;
}

// void passbyRefer(int * ptr) {

//     *ptr = 20;
// } 

// int main() {
//    int a = 2;       //pass by reference using pointer

//     passbyRefer(&a);

//     cout<<a<<endl;
// }

 void reverseHalf(int * arr, size) {
    int *l = arr;
    int m = arr + 2;

    while(l < m) {
        swap(l,m);
        l++;
        m--;
    }
 }

 int main() {
    int arr = {1,2,3,4,5,6};
    reverseHalf(arr,6);

    for(int i = 0;i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
 }