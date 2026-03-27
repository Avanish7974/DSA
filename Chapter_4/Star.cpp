#include <iostream>
using namespace std;

int main(){
    int n = 5; // size of the square
    
    
    for (int i = 0; i < n; i++) { // outer loop
        int num = 1;
        for (int j = 0; j < i+1; j++) { // inner loop
            cout << num; // print the current count
            num++;
        }
        cout << endl; // move to the next line after each row
    }
    
    return 0;
}