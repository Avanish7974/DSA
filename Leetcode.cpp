#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int nums[6] = {1,2,1,3,2,5};
    vector<int>nu;


    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int freq = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (num == nums[j]) {
                freq++;
            }
        }
        if (freq == 1) {
            nu.push_back(num);
        }

    }

    return 0;
}