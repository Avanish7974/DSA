#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
//     int r, c;
//     cout << "Enter number of rows: ";
//     cin >> r;
//     cout << "Enter number of columns: ";
//     cin >> c;
//     vector<vector<int>>matrix(r,vector<int>(c,1));
//     cout << "2D Vector: " << endl;
//     // row wise traversal
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // size of row and column
//     cout<<"Row = "<<matrix.size()<<endl;
//     cout<<"Column = "<<matrix[0].size()<<endl;
// // column wise traversal
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             cout<<matrix[j][i]<<" ";
//         }
//         cout<<endl;
//     }

    // wave traversal

    const int r = 4, c = 4;
    int matrix[r][c]  = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        cout << "Original 2D Array: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Wave Traversal: "<<endl;
        for(int j=0;j<c;j++){

        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    cout<<endl;

    int arr[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arr[j][i] = matrix[i][j];
        }
    }
cout<<"Transposed 2D Array: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        

    
    return 0;
}