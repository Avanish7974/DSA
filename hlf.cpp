#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {

    int arr[] = {37,12,28,9,100,56,80,5,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>ar;
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = 0; j < n; j++){
            if(arr[i]>arr[j]){
                count++;
            }
            
        }
        ar.push_back(count);
    }

    for(int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    



    return 0;
}