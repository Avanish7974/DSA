#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello";

    cout << str[0] << endl;

    // print characters using range loop
    for(auto c : str) {
        cout << c << " ";
    }

    cout << endl;

    // reverse of the string
    for(int i = str.length() - 1; i >= 0; i--) {
        cout << str[i] << " ";
    }

    cout << endl;

    // manual size calculation
    int size = 0;

    while(str[size] != '\0') {
        size++;
    }

    cout << "Size of the string is: " << size << endl;

    return 0;

    // palindrome

    string s = "madam";
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        if(s[start] != s[end]) {
            cout << "Not a palindrome" << endl;
            return 0;
        }
        start++;
        end--;
    }
    cout << "It is a palindrome" << endl;

}