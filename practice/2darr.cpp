#include <iostream>
#include <vector>
using namespace std;
// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {
//     int n = mat.size();
//     int sum = 0;
//     int first = 0;
//     int last = n - 1;
//     while(first < n){
//         sum +=  mat[first][last];
//         first++;
//         last--;
//     }
//     int fir = 0;
//     int las = 0;
//     while(fir < n){
//         sum +=  mat[fir][las];
//         fir++;
//         las++;
//     }
//     return sum;
        
//     }
// };
int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    cout << s.diagonalSum(mat) << endl;
    return 0;
}
