#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int arr[n] = {1,3,2,4,5,4,2,6,7};
    int temp = 0;
    int value = 0;


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
        if(count > temp || (count == temp && arr[i] < value)) {
            temp = count;
   

            value = arr[i];

        }


    



    }

    cout << "Element with maximum frequency is: " << value<<" with frequency " << temp << endl;
    



    return 0;
}