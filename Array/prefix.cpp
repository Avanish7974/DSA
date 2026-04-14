#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    cout<<"Array elements: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr2[n];
    arr2[0] = arr[0];

    for(int i = 1; i < n; i++){
        arr2[i] = arr2[i-1] + arr[i];
        
    }

    cout<<"Prefix sum array: ";
    for(int i = 0; i < n; i++){ 
        cout<<arr2[i]<<" ";
    }

    int arr3[n];
    arr3[4] = arr[4];
    for(int j = n-2;j>=0;j--){
        arr3[j] = arr3[j+1] + arr[j];
    }
    cout<<endl;
    cout<<"Suffix sum array: ";
    for(int i = 0; i < n; i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}