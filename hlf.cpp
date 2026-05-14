#include <iostream>
#include <string>


using namespace std;

int main() {
    
    string s = "Let's take LeetCode contest";
    string ans = "";
    int start = 0;
    int end = s.length() - 1;
    // to find the length of first word in the string

    for(int i = 0;i<end;i++){
        if(i == 4){
            start = s[i].length();
        }
    }
    cout<<end;

    return 0;
}
