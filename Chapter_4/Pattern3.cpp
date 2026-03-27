#include <iostream>
using namespace std;
int main() {
    // program to print square of *
    int n = 5; // size of the square
    int count = 1; // initialize count to 1
    for (int i = 1; i < n; i++) { // outer loop
        for (int j = 1; j < n; j++) { // inner loop
            cout << count << " "; // print the current count
            count++; // increment count for the next number
        }
        cout << endl; // move to the next line after each row
    }
    char ch = 'A';

    for (int i = 1; i < n; i++) { // outer loop
        for (int j = 1; j < n; j++) { // inner loop
            cout << ch << " "; // print the current count
            ch++; // increment count for the next number
        }
        cout << endl; // move to the next line after each row
    }

    return 0;
}