#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    cout << "2D Array: " << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Rotated Array: "<<endl;
    int mat[4][4];
    int k = 0;

    

    for(int i = 0; i < 4; i++) {
        int l = 0;
        for(int j = 3; j >= 0; j--) {
            cout << arr[j][i] << " ";
                mat[k][l] = arr[j][i];
                l++;

        }
        k++;
        cout << endl;
    }
    cout<<"Final Rotated Array: "<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}