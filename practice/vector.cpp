#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    vector<vector<int>>matrix(r,vector<int>(c,1));
    cout << "2D Vector: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Row = "<<matrix.size()<<endl;
    cout<<"Column = "<<matrix[0].size()<<endl;

    
    return 0;
}