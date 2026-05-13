#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::vector<int> nums = {1, 12, 123, 1234, 12345, 123456};
    int num = 0;
    for(int i = 0; i < nums.size(); i++) {
        int ans = 0;
        while(nums[i] > 0) {
            int rem = nums[i] % 10;
            ans += 1;
            nums[i] = nums[i] / 10;
        }
        if(ans%2 ==0){
            num++;

        }
    }
    cout << num << endl;
    
    
    return 0;
}