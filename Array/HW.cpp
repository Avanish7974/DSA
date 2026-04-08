#include <iostream>
#include <algorithm>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int multiply(int arr[], int n){
    int product = 1;
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }
    return product;
}

int main (){
    int arr[5] = {1, 2, -3, 4, 5};

    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 1; i < 5; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    swap(arr[maxIndex], arr[minIndex]);

    cout<<"Maximum element in array: "<<arr[minIndex]<<endl;
    cout<<"Minimum element in array: "<<arr[maxIndex]<<endl;

    cout<<"Array after swapping:\n";

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Sum of array elements: "<<sum(arr,5)<<endl;
    cout<<"Product of array elements: "<<multiply(arr,5)<<endl;

    return 0;
}