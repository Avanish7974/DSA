#include <iostream>
using namespace std;

int main() {

    // ---------------------------------------------------
    // Code for checking palindrome of a string

    cout << "Code for checking palindrome of a string" << endl;

    string str = "maam";

    int first = 0;
    int last = str.length() - 1;

    while(first < last)
    {
        if(str[first] != str[last])
        {
            cout << "Not Palindrome" << endl;
            return 0;
        }

        first++;
        last--;
    }

    cout << "Palindrome" << endl << endl;

    // ---------------------------------------------------
    // Code for counting number of words in a string

    cout << "Code for counting number of words in a string" << endl;

    string str2 = "Hello Baby";

    int count = 1;

    for(int i = 0; i < str2.length(); i++)
    {
        if(str2[i] == ' ')
        {
            count++;
        }
    }

    cout << "Number of words in the string: " << count << endl << endl;

    // ---------------------------------------------------
    // Code for finding the length of the longest word in a string

    cout << "Code for finding the length of the longest word in a string" << endl;

    string str3 = "Hello Baby kaise ho";

    int len = 0, maxLen = 0;

    for(int i = 0; i < str3.length(); i++)
    {
        if(str3[i] == ' ')
        {
            len = 0;
        }
        else
        {
            len++;

            if(len > maxLen)
            {
                maxLen = len;
            }
        }
    }

    cout << "Length of the longest word in the string: " << maxLen << endl << endl;

    // ---------------------------------------------------
    // Code for counting vowels, consonants and spaces

    cout << "Code for counting vowels, consonants and spaces" << endl;

    string str4 = "College aa bhi aa jaya karo kabhi kabhi apne jalwe bikharne";

    int vowels = 0, consonants = 0, space = 0;

    for(int i = 0; i < str4.length(); i++)
    {
        if(str4[i] =='a' || str4[i] == 'e' || str4[i] == 'i' || str4[i] == 'o' || str4[i] == 'u' ||
           str4[i] == 'A' || str4[i] == 'E' || str4[i] == 'I' || str4[i] == 'O' || str4[i] == 'U')
        {
            vowels++;
        }
        else if(str4[i] == ' ')
        {
            space++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << space << endl << endl;

    // ---------------------------------------------------
    // Code for removing vowels from a string

    cout << "Code for removing vowels from a string" << endl;

    string str5 = "Hello babu miss you";

    for(int i = 0; i < str5.length(); i++)
    {
        if(str5[i] =='a' || str5[i] == 'e' || str5[i] == 'i' || str5[i] == 'o' || str5[i] == 'u' ||
           str5[i] == 'A' || str5[i] == 'E' || str5[i] == 'I' || str5[i] == 'O' || str5[i] == 'U')
        {
            str5.erase(i,1);

            i--;
        }
    }

    cout << str5 << endl << endl;

    // ---------------------------------------------------
    // Code for reversing a string

    cout << "Code for reversing a string" << endl;

    string str6 = "Shraddha";

    int first2 = 0;
    int last2 = str6.length() - 1;

    while(first2 < last2)
    {
        swap(str6[first2], str6[last2]);

        first2++;
        last2--;
    }

    cout << str6 << endl;

    return 0;
}