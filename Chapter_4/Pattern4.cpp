#include <iostream>
using namespace std;

int main(){
    int n = 5; // size of the square
    for (int i = 0; i < n; i++) { // outer loop
        // int num = 1;
        for (int j = i; j < n; j++) { // inner loop
            cout << "*"; // print the current count
        }
      cout << endl; // move to the next line after each row
    }
    
    return 0;
}