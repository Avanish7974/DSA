#include <iostream>
using namespace std;

int main() {

    string str = "maam";

    int first = 0;
    int last = str.length() - 1;

    while(first < last)
    {
        if(str[first] != str[last])
        {
            cout << "Not Palindrome";
            return 0;
        }

        first++;
        last--;
    }

    cout << "Palindrome";

    return 0;
}