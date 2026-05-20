#include <iostream>
using namespace std;

int even(int n){
    if(n == 0){
        return 0;
    }
    if(n%2 ==0){
        cout << n << " is even" << endl;
    }
    even(n-1);
}

int main() {
    int n = 5;
    even(n);
    return 0;
}