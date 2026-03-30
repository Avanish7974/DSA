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
    int largest = arr[0];
    // to print index of largest element/
    int largestIndex = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout<<"Largest element in array: "<<largest<<endl;
    cout<<"Index of largest element: "<<largestIndex<<endl;




    return 0;
}