#include <iostream>
using namespace std;

int main() {
    int num = 10;

    for(int i = 1; i <= num; i++) {
        if(i * i == num) {
            cout << num << " is the square of " << i;
            break;
        }
    }

    return 0;
}