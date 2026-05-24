#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    

    
        // fibonacci series;
        int n = 10; // Number of Fibonacci numbers to generate
        int a = 0, b = 1;
        cout << "Fibonacci Series: ";
        int c = 0;
        for (int i = 0; i < n; i++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
            
        }

        

    return 0;
}

    