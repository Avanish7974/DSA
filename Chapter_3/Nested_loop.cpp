#include <iostream>
using namespace std;
int main() {
    // program to print square of *
    int n = 5; // size of the square
    for (int i = 1; i < n; i++) { // outer loop
        for (int j = 1; j < n; j++) { // inner loop
            cout << j;
        }
        cout << endl; // move to the next line after each row
    }
    

    return 0;
}