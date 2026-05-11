#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[4] = {0};

    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = i+1;j<n;j++){
            if(arr[i]%2 == 0){
                if(arr[j]%2 != 0){
                    count += 1;
                }
                arr2[i] = count;
            }
            if(arr[i]%2 != 0){
                if(arr[j]%2 == 0){
                    count += 1;
                }
                arr2[i] = count;
            }
    }
}
for(int i = 0;i<n;i++){
    cout<<arr2[i]<<" ";
}

    return 0;
}
