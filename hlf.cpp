#include <iostream>
#include <string>
#include <vector>

using namespace std;

int digit()

int main() {

    vector<string>str;
    string c = "";
    string a = "abc";
    string b = "def";
    string digits = "23";
    

    
    for(int i = 0;i < a.size();i++){
        string temp = "";
        for(int j =0;j<b.size();j++){
            temp +=a[i];
            temp +=b[j];
            str.push_back(temp);
             temp = "";
        }
    }
   
    for(int i = 0;i<str.size();i++){
        cout << str[i] << endl;
    }



    return 0;
}