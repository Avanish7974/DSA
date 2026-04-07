#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {6, 2, -3, 4, 8};
    
    int target = 8;
    int start = 0,end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(target >arr[mid]){
            start = mid +1;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }
        
        else{
            cout<<"Element found at index : "<<mid<<endl;
            return 0;
        }

    }


    

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}