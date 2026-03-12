#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(int arr[], int n) {

    int IsSwap = false;
    for(int i = 0;i < n-1;i++) {

        for(int j = 0;j < n-i-1;j++) {

            if(arr[j] > arr[j+1]) {

                swap(arr[j],arr[j+1]);
                IsSwap = true;
            }
        }
        if(!IsSwap) {
        return;
    }
    }
}

void SelectionSort(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        int smallIdx = i;

        for(int j = i+1;j < n;j++) {
            if(arr[smallIdx] > arr[j]) {

                smallIdx = j;
            }
        }
        swap(arr[smallIdx],arr[i]);
    } 
}

void InsertionSort(int arr[],int n) {

    for(int i = 1;i < n;i++) {
        int currentElement = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > currentElement) {

            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = currentElement;
    }
}

void PrintArray(int arr[],int n) {

    cout<<"The sorted array is:\n";
    for(int i = 0;i < n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {3,2,7,6,5};
    int n = 5;

    // BubbleSort(arr,n);
    // SelectionSort(arr,n);
    InsertionSort(arr,n);
    PrintArray(arr,n);
    return 0;
}