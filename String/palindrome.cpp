#include <iostream>
using namespace std;

int main() {

    // code for checking palindrome of a string

    // string str = "maam";

    // int first = 0;
    // int last = str.length() - 1;

    // while(first < last)
    // {
    //     if(str[first] != str[last])
    //     {
    //         cout << "Not Palindrome";
    //         return 0;
    //     }

    //     first++;
    //     last--;
    // }

    // cout << "Palindrome";

    // code for counting number of words in a string

    // string str2 = "Hello Baby";
    // int count = 1;
    // for(int i = 0;i<str2.length();i++){
    //     if(str2[i]=' '){
    //         count += 1;
    //     }
    // }

    // cout << "Number of words in the string: " << count;

    // code for finding the length of the longest word in a string

    string str3 = "Hello Baby kaise ho";

    int count = 0, maxLen = 0;

    for(int i = 0; i < str3.length(); i++)
    {
        if(str3[i] == ' ')
        {
            count = 0;
        }
        else
        {
            count++;

            if(count > maxLen)
            {
                maxLen = count;
            }
        }
    }

    cout << "Length of the longest word in the string: " << maxLen;



    return 0;
}