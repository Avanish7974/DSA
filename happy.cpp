// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n = 3,rem= 0,temp = 2;
    while(temp != 1 && temp != 4) {
        int sum = 0;
        while(n>0){
        rem = n%10;
        sum += rem*rem;
        n = n/10;
    }
    temp = sum;
    n = sum;

    }
    cout<<"The number is: "<<temp<<endl;

    return 0;
}