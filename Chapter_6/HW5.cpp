#include <iostream>
using namespace std;
int main(){

    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;

    // int first = 0,
    //     second = 1,
    //     next = 0;

    // for(int i = 0; i < n; i++){
    //     cout<<first<<" ";
    //     next = first + second;
    //     first = second;
    //     second = next;
    // }
    int arr[10];
    arr[0] = 0;
    arr[1] = 1;
    int n = 8;
    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout<<arr[n]<<" ";

    }



    return 0;
}