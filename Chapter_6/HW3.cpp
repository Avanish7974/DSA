#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,2,3,4,3,5};
    int n = 7;

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}