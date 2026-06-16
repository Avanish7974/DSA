#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
     int arr[10] = {1,2,3,4,5,6};
     int n = 6;

     int pos = 2;
     int value =20;
     for(int i = 6;i>pos;i--){
        arr[i] = arr[i-1];
     }
     arr[pos] = value;
     n++;
     
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

     for(int i = pos;i<n-1;i++){
        arr[i] = arr[i+1];
     }
     n--;
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
     }

    return 0;
}