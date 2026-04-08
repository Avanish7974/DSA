#include <iostream>
using namespace std;
int main() {
    // linear search
    int arr[] = {1, 2, 3, 4, 5,6};
    int n = 6;
    int start = 0;
    int end = n-1;
    int key = 6;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key) {
            cout << "Element found at index: " << mid << endl;
            break;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    return 0;
}