#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};
    for (int i = 0; i < n; i++) {
        int index = i;
        cout << arr[index] << " ";
        for (int j = i; j < n-1; j++) {
            cout << arr[i]<<arr[j+1] << " ";
        }
    }
    return 0;
}