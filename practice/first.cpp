#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[n] = {1,3,2,3,4,1,5,2};
    for(int i = 0;i<n;i++) {
        int sum = 1;
        for(int j = i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
                sum++;
            } 
              
        }
        
        cout<<"Frequency of "<<arr[i]<<" is: "<<sum<<endl;
        
    }

    return 0;
}