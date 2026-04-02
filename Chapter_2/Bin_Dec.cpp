#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 0;
    int remainder;
    int mul = 1;

    while (n>0)
    {
        remainder = n%10;
        n = n/10;
        ans = remainder *mul + ans;
        mul = mul*2;



    }
    cout<<"The Binary to decimal is  : "<<ans<<endl;
    

    return 0;
}