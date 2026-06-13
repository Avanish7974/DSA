#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> nums = {1,0,1,2};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    cout<<n;
    return 0;
}