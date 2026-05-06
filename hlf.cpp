#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10,5,10,15,10,5};
    // bool visited[6] = {false};
    // for(int i = 0;i<6;i++){
    //     if(visited[i]) continue;
    //     cout<<arr[i]<<" ";
    //     int count = 1;
    //     for(int j = i+1;j<6;j++){
    //         if(arr[i] == arr[j]){
    //             visited[j] = true;
    //             count++;

    //         }

    //     }
    //     cout<< count<<endl;

    // }
    int a = 10,b = 20;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" " <<b;

    return 0;
}
