#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<int> nums = {1, 3,4,2,2};
    vector<int> nums2 = {5,6};



    // Print vector
    // sort(nums.begin(),nums.end());
    // for (int i = 0; i < nums.size(); i++) {
    //     cout << nums[i] << " ";
    // }
    // cout<<endl;
    int k = 0;

    for (int i = 0; i < nums2.size(); i++) {
        nums.push_back(nums2[i]);
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    int n = nums.size();

if (n % 2 == 0) {
    cout << "Middle elements: "
         << nums[n/2 - 1] << " "
         << nums[n/2];
}
else {
    cout << "Middle element: "
         << nums[n/2];
}
    



   

    
    

    return 0;
}