#include <iostream>
using namespace std;

int main() {
    int n = 8;

    int start = 0;
    int end = n;
    int ans = 0;

    while(start <= end) {

        int mid = (start + end) / 2;

        if(mid * mid <= n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Square root = " << ans;
}