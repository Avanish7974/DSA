#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int nums[4] = {10,4,8,3};
    int n = sizeof(nums)/sizeof(nums[0]);
    vector<int>right;
    for(int i = 0;i<n-1;i++){
        int sum  = 0;
       for(int j = i+1;j<n;j++){ 
             sum += nums[j];
       }
         right.push_back(sum);
    }
    right.push_back(0);
    for(int i = 0;i<n;i++){
        cout << right[i] << " ";
    }
    cout << endl;
    vector<int>left;
    // left.push_back(0);
    for(int i = 0;i<n;i++){
        int sum  = 0;
       for(int j = i-1;j>=0;j--){ 
             sum += nums[j];
       }
         left.push_back(sum);
    }
    for(int i = 0;i<n;i++){
        cout << left[i] << " ";
    }
    vector<int>answer;
    for(int i = 0;i<n;i++){
        answer.push_back(abs(left[i]-right[i]));
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout << answer[i] << " ";
    }




    return 0;
}