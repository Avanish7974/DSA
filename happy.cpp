#include <iostream>
using namespace std;

int main() {

    string str = " ";
    string str2 = "s";
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
    for(int i = 0; i < 26; i++) {

    if(arr[i] != 0) {

        char c = 'a' + i;

        cout << c << " ";

        return 0;
    }
}

    // cout << "Anagrams" << endl;
    return 0;
}