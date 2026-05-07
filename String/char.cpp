#include <iostream>
using namespace std;

int main() {

    // cout << "Lowercase:\n";
    // for(char c = 'a'; c <= 'z'; c++) {
    //     cout << c << " ";
    // }

    // cout << "\nUppercase:\n";
    // for(char c = 'A'; c <= 'Z'; c++) {
    //     cout << c << " ";
    // }

    // // this is example of implicit type conversion, we can also use int to char conversion

    // for(int i = 65; i <= 90; i++) {
    //     cout << char(i) << " ";
    // }

    
    string str = "thequickbrownfoxjumpsoverthelazydog";

    for(char c = 'a'; c <= 'z'; c++) {

        bool found = false;

        for(int i = 0; i < str.length(); i++) {

            if(c == str[i]) {
                found = true;
                break;
            }
        }

        if(found == false) {
            cout << "Character missing: " << c << endl;
            return 0;
        }
    }

    cout << "All characters are present in the string." << endl;

    return 0;
}