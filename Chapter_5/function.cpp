#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;

    return c;
}
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int sum(int a){
    int su = 0;
    while(a>0){
        int rem = a%10;
        su += rem;
        a = a/10;
    }
    return su;

}

int ncr(int n,int r){
    int num = factorial(n);
    int re = factorial(r);
    int den = factorial(n-r);

    return num/(re*den);
}

int main(){
    int result = sum(3, 4);
    cout << result << endl;
    cout<< factorial(5) << endl;
    cout << sum(1230) << endl;
    cout << ncr(5, 2) << endl;
    return 0;
}

