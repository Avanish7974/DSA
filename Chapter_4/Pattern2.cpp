#include <iostream>
using namespace std;

int main(){
    int n = 5; // size of the square
    char ch = 'D';
    for (int i = 1; i < n; i++) { // outer loop
        for (char j = 'A'; j <= ch; j++) { // inner loop
            cout << j;
        }
        cout << endl; // move to the next line after each row
    }
    
    return 0;
}