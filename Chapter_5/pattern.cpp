#include <iostream>
using namespace std;

void fun(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void fun1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void fun2(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void fun3(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
            cout<<" ";
        }
        for(int k =0;k<n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void fun4(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 0; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    fun(n);
    cout << endl;

    fun1(n);
    cout << endl;

    fun2(n);
    cout << endl;
    fun3(n);
    cout << endl;
    fun4(n);

    return 0;
}