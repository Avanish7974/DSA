#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, -6, 2, 8};
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << arr[i] << " | ";
    }
    cout << endl;
    cout << "Sum: " << sum << endl;

    int sum2 = 0;
    for (int i = 0; i < n - 1; i++) {
        sum2 += arr[i] + arr[i + 1];
        cout << arr[i] << " " << arr[i + 1] << " | "; // fixed spacing
    }
    cout << endl;
    cout << "Sum of pairs: " << sum2 << endl;

    int sum3 = 0;
    for (int i = 0; i < n - 2; i++) {
        sum3 += arr[i] + arr[i + 1] + arr[i + 2];
        cout << arr[i] << " " << arr[i + 1] << " " << arr[i + 2] << " | "; // fixed spacing
    }
    cout << endl;
    cout << "Sum of triplets: " << sum3 << endl;

    int sum4 = 0;
    for (int i = 0; i < n - 3; i++) {
        sum4 += arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3];
        cout << arr[i] << " " << arr[i + 1] << " " << arr[i + 2] << " " << arr[i + 3] << " | "; // fixed spacing
    }
    cout << endl;
    cout << "Sum of quadruplets: " << sum4 << endl;

    cout << "Maximum sum is: " << max({sum, sum2, sum3, sum4}) << endl;

    return 0;
}