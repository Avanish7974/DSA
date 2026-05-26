#include <iostream>
using namespace std;
// this search is called recursive linear search
void print(int arr[],int n,int target,int start){
    if(start == n){
        cout<<start<<endl;
        return;
    }
    if(arr[start] == target){
        cout<<"Target found at index: "<<start<<endl;
        return;
    }
    print(arr, n, target, start + 1);
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 50;
    int start = 0;

    print(arr, n-1, target, start);
    return 0;
}