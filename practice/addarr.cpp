#include <iostream>
using namespace std;
// sum of 2d array
int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {3,4,5,6,7,8,9,10,11,12,13,14};
    int sum[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout << "Sum of 2D Arrays: " << endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}