#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {25,30,45,25,30,25};

    cout<<"Array elements: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout<<"Frequency of "<<arr[i]<<" is: "<<count<<endl;
    }

    return 0;
}