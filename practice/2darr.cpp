#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "poiinter";
    string s1 = "";
    cout << s << endl;
    int n = s.length();
    for(int i = 0;i<n;i++) {
        if(s[i] == 'i'){
            reverse(s1.begin(), s1.end());
        }
        else{
            s1.push_back(s[i]);
        }
    }
    cout << s1 << endl;
    return 0;
}
