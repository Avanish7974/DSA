// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n = 19,rem= 0,temp = 1;
    while(temp!=0 && temp!=1) {
        int sum = 0;
        while(n>0){
        rem = n%10;
        sum += rem*rem;
        n = n/10;
    }
    temp = sum;

    }

    return 0;
}