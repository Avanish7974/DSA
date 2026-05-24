#include <iostream>
using namespace std;

int factorial(int i, int n){

    if(n == 1) {   // Base case
        cout << i << endl;
        return i;
    }

    i *= n;
    return factorial(i, n-1);  // Recursive call
}
int power(int i, int n, int temp){

    if(n == 1) {   // Base case
        temp *= i;
        cout << temp << endl;
        return temp;
    }
    

    temp *= i;
    return power(i, n-1, temp);  // Recursive call
}
int square(int i, int n){

    if(n == 1) {   // Base case
        
        cout << i << endl;
        return i;
    }

    i += n*n;
    return square(i, n-1);  // Recursive call
}

int main() {
    factorial(1, 5);
    power(2, 5, 1);
    square(1, 4);
    return 0;
}