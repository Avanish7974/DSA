#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    
    // int arr[n] = {1, 2, 3}; // Example array
    vector<int>nums = {1,3,1};
    int k = 3;
    vector<int>nums1 = {2,4,3,5};


    int count = 0;
        for(int i = 0;i<nums.size();i++){
            int sum = nums[i];
            // if(sum == k){
            //     count++;
            // }
            for(int j = i;j<nums.size()-1;j++){
                sum += nums[j+1];
                if(sum == k){
                    count++;  
            }

        }
    cout << count << endl;
    

    return 0;
}