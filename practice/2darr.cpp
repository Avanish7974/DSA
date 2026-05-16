#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "pointer is very important";
    string s1 = "";
    string word = "";

    int n = s.length();

    for(int i = 0; i < n; i++) {

        if(s[i] != ' ') {
            word.push_back(s[i]);
        }
        else {

            s1 += word;
            s1 += " ";

            word = "";
        }
    }

    // last word
    s1 += word;

    cout << s1 << endl;

    return 0;
}