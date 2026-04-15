#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[n] = {1,3,2,3,4,1,5,2};
    int temp = 0;

    for(int i = 0; i < n; i++) {

        bool visited = false;

        // check if element already counted
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                visited = true;
                break;
            }
        }

        if(visited) continue;

        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        

        cout << "Frequency of " << arr[i] << " is: " << count << endl;
        if(count > temp) {
            temp = count;
        }
        

    }
    cout << "Maximum frequency is: " << temp << endl;

    return 0;
}