#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter you age: ";
    cin >> num;

    if (num >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    // odd even check
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}


