#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    for(int i = 2;i<=n;i++){
        if(i*i==n){
            cout<<"The number is a perfect square of : "<<i<<endl;
            return 0;
        }
    }
    cout<<"The number is not a perfect square."<<endl;
    return 0;
}