#include <iostream>
using namespace std;

void findmax(int arr[][4], int rows, int cols){
    int sum = 0,temp = 0,row = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            temp += arr[i][j];

        }
        if(temp > sum){
            sum = temp;
            row = i;

        }
        temp = 0; // Reset temp for the next row
    }
    cout << "Maximum sum of a row: " << sum << endl;
    cout << "Row index: " << row << endl;
}

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rows = 3;
    int cols = 4;
    findmax(arr, rows, cols);
    
    return 0;
}