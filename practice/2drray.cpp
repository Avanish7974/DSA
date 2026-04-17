#include <iostream>
using namespace std;

void DArray(int arr[][4], int rows, int cols) {
    cout << "2D Array: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rows = 3;
    int cols = 4;
    cout << "2D Array: " << endl;
    DArray(arr, rows, cols);

    return 0;
}