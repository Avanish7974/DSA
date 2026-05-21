#include <iostream>
using namespace std;

void num(int i, int n){

    if(i > n) {   // Base case
        cout << i << " ";
        return;
    }

    cout << i << " ";

    num(i + 2, n);   // Recursive call
}

int main() {
    num(2, 5);
}