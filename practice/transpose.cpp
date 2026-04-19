#include <iostream>
using namespace std;

int main() {
    const int r = 4, c = 4;
    int arr[r][c]  = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout << "Original 2D Array: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            swap(arr[i][j], arr[j][i]);

        }

        cout << endl;
    }
    cout << "Transposed 2D Array: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}