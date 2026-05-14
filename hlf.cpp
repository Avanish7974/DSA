#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Let's take LeetCode contest";
    int length = 0;
    int temp = 0;
    int start = 0;
    int end = 0;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == ' ') {
            end = length + temp - 1;
            while(start < end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            start = i+1;
            temp = length;
            length = 0;
        }

        length++;
    }
    cout << s << endl;

    return 0;
}