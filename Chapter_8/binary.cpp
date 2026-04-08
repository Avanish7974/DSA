#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            return mid; // Element found at index mid
        }
        else if(arr[mid] < key) {
            start = mid + 1; // Search in the right half
        }
        else {
            end = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}
int main() {
    // linear search
    int arr[] = {1, 2, 3, 4, 5,6};
    int n = 6;
    int key = 6;
    cout<<"The element is found at index : "<<binarySearch(arr,n,key)<<endl;
    
    return 0;
}