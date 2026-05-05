#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10,5,10,15,10,5};
    bool visited[6] = {false};
    for(int i = 0;i<6;i++){
        if(visited[i]) continue;
        cout<<arr[i]<<" ";
        for(int j = i+1)
    }
    return 0;
}
