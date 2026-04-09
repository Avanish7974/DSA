#include <iostream>
using namespace std;
int main() {
    
    int a = 10;
    int b = 20;

    int a = a^b; // a now holds the result of a XOR b
    int b = a^b; // b now holds the original value of a
    int a = a^b; // a now holds the original value of b
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int ans;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(nums[mid] == target)
                return mid;

            else if(nums[mid] < target)
                start = mid + 1;

            else{
                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }
};
