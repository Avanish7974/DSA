// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {74,38,43,5};
    int n = arr.size();
    vector<int> arr2;
    int temp = 0;
    // int rem = 0;
    for(int i = n-1;i>=0;i--){
        if(arr[i]>9){
            int rem = 0;
            while(arr[i]>0){
                rem = arr[i]%10;
                arr[i] = arr[i]/10;
                arr2.push_back(rem);

            }
        }
        else{
            arr2.push_back(arr[i]);
        }

        


    }
    reverse(arr2.begin(),arr2.end());

    return 0;
}