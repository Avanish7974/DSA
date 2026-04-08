#include <iostream>
using namespace std;
int main() {
    // linear search
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 3;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            
        }

    }
    return 0;
}
