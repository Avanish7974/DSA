#include <iostream>
using namespace std;
void print(int arr[],int n,int &rum){
    if(n == -1){
        return;
    }
    cout<<arr[n]<<" ";
    rum += arr[n];
    print(arr,n-1,rum);
}

void minimum(int arr[],int n,int &min){
    if(n == -1){
        return;
    }
    cout<<arr[n]<<" ";
    if(arr[n] < min){
        min = arr[n];
    }
    cout<<"Min: "<<min<<endl;
    minimum(arr,n-1,min);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int min = 100;

    print(arr, n - 1, sum);
    cout << "Sum: " << sum << endl;
    minimum(arr, n - 1, min);
    cout << "Min: " << min << endl;

    return 0;
}