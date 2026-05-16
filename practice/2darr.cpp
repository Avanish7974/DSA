#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {



    string s = "ba";
    int max = 0;
    int ind = 0;
        int sz = s.size();
        for(int i = 0;i<sz;i++){
            int temp = 0;
            int first = 0;
            if(s[i] == s[i+1]){
                ind = i;
                while(s[ind] == s[ind+first]){
                    temp++;
                    first++;
                }
            }
            if(temp > max){
                max = temp;
            }
            if(max == 0){
                max = 1;
                
            }
        }
    cout << max << endl;

    return 0;
}