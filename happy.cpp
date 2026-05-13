#include <iostream>
using namespace std;

int main() {

    string str = "anagram";
    string str2 = "nagaram";
    int arr[26] = {0};

    for(int i = 0; i < str.length(); i++) {
        arr[str[i] - 'a']++;
    }

    cout << "Array after counting characters in str: ";
    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < str2.length(); i++) {
        arr[str2[i] - 'a']--;
    }
    cout << "Array after counting characters in str2: ";
    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}