#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int index = 3;
    int target = 10;
    for(int i = 0; i < n; i++) {

        if(arr[i] == arr[index]) {
            arr[i] = target;

            
            
        }


    }
    cout << "Array after replacement: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}