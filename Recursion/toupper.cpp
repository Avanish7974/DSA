#include <iostream>
using namespace std;
void toupper(string &str,int start,int n){
    if(start ==n){
        return ;
    }
    str[start] = toupper(str[start]);
    toupper(str,start+1,n);
}

void printString(string &str,int start,int end) {
    if(start>=end){
        cout << "Palindrome" << endl;
        return ;
    }
    if(str[start] != str[end]){
        cout << "Not a palindrome" << endl;
        return;
    }
    start++;
    end--;
    printString(str,start,end);
}


int main() {
    string str = "madm";
    toupper(str, 0, str.length());
    cout << str << endl;
    printString(str, 0, str.length() - 1);

    return 0;
}