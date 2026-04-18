#include <iostream>
using namespace std;

void diagonal(int arr[][4], int rows, int cols){
    int sum = 0;
    cout << "Diagonal Elements: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "Sum of diagonal elements: " << sum << endl;
}

void antidiagonal(int arr[][4], int rows, int cols){
    int secondsum = 0;
    int i = 0,j = cols - 1;
    while(j >= 0){
        secondsum += arr[i][j];
        i++,j--;
    }
    cout << "Sum of anti-diagonal elements: " << secondsum << endl;
}

int main() {

    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int rows = 4;
    int cols = 4;
    cout << "2D Array: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    diagonal(arr, rows, cols);

    // second method
    int sum2 = 0;
    for(int i = 0; i < 4; i++) {
        sum2 += arr[i][i];
    }

    cout << "Sum of diagonal elements: " << sum2 << endl;
    antidiagonal(arr, rows, cols);

    for(int i = 0;i< rows;i++){
        int start = 0,  end = cols - 1;
        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    cout << "Array after reversing each row: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}