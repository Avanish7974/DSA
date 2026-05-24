#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
        int n = 3;
        int i=0,j=0,k=0;
        j = n-1;
        k = n-2;
        int sum = 0,lum = 0;
        long long a = 1,b = 2;
        if(n<=2){
            return n;
        }
        
        for(int x = 0;x<j;x++){
            sum = a;
            int c = a + b;
            a = b;
            b = c;   
        }
        cout<<sum<<" "<<a<<" "<<b<<endl;
        a = 1; b = 2;
        for(int x = 0;x<k;x++){
            lum = a;
            int c = a + b;
            a = b;
            b = c;   
        }
        cout<<lum<<" "<<a<<" "<<b<<endl;
        i = sum +lum;
        cout<<i<<endl;
    return 0;
}

    