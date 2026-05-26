#include <iostream>
#include <string>
using namespace std;
void printString(string &str,int start,int end) {
    if(start>=end){
        return ;
    }
    swap(str[start],str[end]);
    start++;
    end--;
    printString(str,start,end);
}

int main() {
    string str = "Hello";
    int size = str.length();
    int start = 0;
    int end = size -1;
    printString(str,start,end);
    cout << "Reversed string: " << str << endl;

    return 0;
}