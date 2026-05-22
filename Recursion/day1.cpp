#include <iostream>
using namespace std;

int factorial(int i, int n){

    if(n == 1) {   // Base case
        cout << i << "aaa ";
        return i;
    }

    i *= n;
    return factorial(i, n-1);  // Recursive call
}
int power(int i, int n, int temp){

    if(n == 1) {   // Base case
        cout << i << "ddd ";
        return i;
    }
    

    temp *= i;
    return power(i, n-1, temp);  // Recursive call
}

int main() {
    factorial(1, 5);
    power(2, 5,1);
    return 0;
}