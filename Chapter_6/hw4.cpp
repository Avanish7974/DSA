#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,2,4,7,7,3,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = 0;
    int sum = 0;
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2])
            {
                ans = sum;
                sum = arr[i] + arr[i+1] + arr[i+2];
                if(ans < sum)
                {
                    ans = sum;
                }

            }
        }

    cout << ans << endl;


    return 0;
}