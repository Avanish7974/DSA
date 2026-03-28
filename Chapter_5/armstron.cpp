#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int temp = n;
    int original = n;
    int sum = 0;
    int power = 0;

    while(temp>0){
        power++;
        temp = temp/10;
    }

    cout<<"Power: "<<power<<endl;

    while(n>0){
        int rem = n%10;
        sum += (int)pow(rem, power);
        n = n/10;
    }

    if(sum == original){
        cout<<"It is an Armstrong number."<<endl;
    }
    else{
        cout<<"It is not an Armstrong number."<<endl;
    }

    return 0;
}