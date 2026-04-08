#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5] = {1, 2, -3, 4, 5};

    cout<<"Array elements: ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int smallest = INT_MAX;
    // to print index of smallest element/
    int smallestIndex = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    cout<<"Smallest element in array: "<<smallest<<endl;
    cout<<"Index of smallest element: "<<smallestIndex<<endl;

    return 0;
}