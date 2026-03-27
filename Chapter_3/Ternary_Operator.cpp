#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Using ternary operator to find the maximum of two numbers
    int max = (num1 > num2) ? num1 : num2; 

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << max << endl;

    return 0;
}