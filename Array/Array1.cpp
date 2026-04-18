#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3,3, 4, 5};
    int n = 0;

    // cout<<"Array elements: ";
    // for(int i = 0; i < 5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int smallest = INT_MAX;
    // // to print index of smallest element/
    // int smallestIndex = 0;
    // for(int i = 0; i < 5; i++){
    //     if(arr[i] < smallest){
    //         smallest = arr[i];
    //         smallestIndex = i;
    //     }
    // }
    // cout<<"Smallest element in array: "<<smallest<<endl;
    // cout<<"Index of smallest element: "<<smallestIndex<<endl;
    // to remove duplicates from sorted array
    for(int i = 0; i < 5; i++){

        if(arr[i] == arr[i+1]){
            n++;
            for(int j = i; j < 5; j++){
                arr[j] = arr[j+1];
            }
            i--;

        }
    }
    cout<<"Array after removing duplicates: ";
    for(int i = 0; i < 6 - n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of duplicates removed: "<<n<<endl;

    return 0;
}