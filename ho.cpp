#include <iostream>
using namespace std;
int main() {
    
    int a = 10;
    int b = 20;

    int a = a^b; // a now holds the result of a XOR b
    int b = a^b; // b now holds the original value of a
    int a = a^b; // a now holds the original value of b
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}
