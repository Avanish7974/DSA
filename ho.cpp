#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    for(int i = 0;i<n;i++) {
        int multiply = 1;
        for(int j = 0;j<n;j++) {
            multiply *= arr[j];
        }
        cout<<"Product of elements in row "<<i+1<<": "<<multiply<<endl;
    }
    

    
    
    return 0;
}
// int a = 10;
    // int b = 20;

    // int a = a^b; // a now holds the result of a XOR b
    // int b = a^b; // b now holds the original value of a
    // int a = a^b; // a now holds the original value of b
    // cout<<"Value of a: "<<a<<endl;
    // cout<<"Value of b: "<<b<<endl;
