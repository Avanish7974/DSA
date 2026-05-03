#include <iostream>
using namespace std;

int main() {

    int n = 5;

    // 1️⃣ Left triangle
    for(int i = 1; i <= n; i++) { 
        
        for (int j = 1; j <= i; j++) {
            cout<<"*"; 
        }

        cout << endl;
    }

    cout << endl;

    // 2️⃣ Right triangle
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<"*";

        cout<<endl;
    }

    cout << endl;

    for(int i=1;i<=n;i++)
{
    // spaces (none needed)
    for(int j=1;j<=0;j++)
        cout<<" ";

    // stars
    for(int j=1;j<=n-i+1;j++)
        cout<<"*";

    cout<<endl;
}

    // 4️⃣ Reverse right triangle (5 rows)
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
            cout<<" ";

        for(int j=1;j<=n-i+1;j++)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}