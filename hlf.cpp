#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "ab-cd-";

    int len = s.length();
    int le = len - 1;

    for(int i = 0; i < le; ) {

        if((s[i] >= 'a' && s[i] <= 'z') ||
           (s[i] >= 'A' && s[i] <= 'Z')) {

            if((s[le] >= 'a' && s[le] <= 'z') ||
               (s[le] >= 'A' && s[le] <= 'Z')) {

                swap(s[i], s[le]);
                i++;
                le--;
            }

            else {
                le--;
            }
        }

        else {
            i++;
        }
    }

    cout << s << endl;

    return 0;
}