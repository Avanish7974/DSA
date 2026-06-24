#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<int> nums = {1, 3,4,2,2};

    // Print vector
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout<<endl;

    for (int i = 0; i < nums.size()-1; i++) {
        if(nums[i]==nums[i+1]){
            cout<<nums[i];
        }
    }
    
    

    return 0;
}