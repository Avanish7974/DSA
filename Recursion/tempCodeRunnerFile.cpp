#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    
    // int arr[n] = {1, 2, 3}; // Example array
    vector<int> nums = {1,1,1};
    int k = 3;
    vector<int> nums = {2,4,3,5};


    int count = 0;
        for(int i = 0;i<nums.size();i++){
            int sum = 0;
            for(int j = i;j<nums.size();j++){
                sum += nums[j];
                if(sum == k){
                    count++;
                }
            }

        }
    

    return 0;
}