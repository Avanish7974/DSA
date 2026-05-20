#include <iostream>
using namespace std;

int even(int n){
    if(n == 0){
        return 0;
    }
    // if(n%2 ==0){
    //     cout << n << " is even" << endl;
    // }
    cout<<n << " is even" << endl;
    even(n-2);
}

int main() {
    int n = 10;
    even(n);
    return 0;
}