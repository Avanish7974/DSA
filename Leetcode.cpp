#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int>nums = {-5,  -3, -4};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    long long max = nums[n-1]; 
    cout << max+1 << endl;
    if(max < 0){
        return 1;
    }
    for(int i = 1; i <= max+1; i++){
        if(find(nums.begin(), nums.end(), i) == nums.end()){
           return i;
        }
    }
    



    return 0;
}