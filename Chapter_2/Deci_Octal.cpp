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
        remainder = n%8;
        n = n/8;
        ans = remainder *mul + ans;
        mul = mul*10;



    }
    cout<<"The Decimal to Octal of the number is : "<<ans<<endl;
    

    return 0;
}