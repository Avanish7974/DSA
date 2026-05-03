#include <iostream>
using namespace std;

int main() {

    cout << "Lowercase:\n";
    for(char c = 'a'; c <= 'z'; c++) {
        cout << c << " ";
    }

    cout << "\nUppercase:\n";
    for(char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }

    // this is example of implicit type conversion, we can also use int to char conversion

    for(int i = 65; i <= 90; i++) {
        cout << char(i) << " ";
    }

    return 0;
}