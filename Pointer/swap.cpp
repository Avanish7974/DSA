#include <iostream>
using namespace std;
void value(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    // cout<<"After swap: "<<a<<" "<<b<<endl;
}
void pointer(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    // cout<<"After swap: "<<*a<<" "<<*b<<endl;
}
void reference(int &a1,int &b1){
    int temp = a1;
    a1 = b1;
    b1 = temp;
    // cout<<"After swap: "<<a1<<" "<<b1<<endl;
}
int main() {
    int x = 10;
    int y = 20;
    cout<<"Before swap: "<<x<<" "<<y<<endl;
    value(x,y);
    cout<<"Value Swap"<<endl;
    cout<<"After swap: "<<x<<" "<<y<<endl;
    pointer(&x,&y);
    cout<<"Pointer Swap"<<endl;
    cout<<"After swap: "<<x<<" "<<y<<endl;
    reference(x,y); 
    cout<<"Reference Swap"<<endl;
    cout<<"After swap: "<<x<<" "<<y<<endl;

    int c = 10;
    int d = 20;
    int &e = c; // e is a reference to c
    cout<<e<<endl; // Output: 10
    e = 30; // Modifying e will modify c
    cout<<c<<endl; // Output: 30

    int f = 10;
    int *g = &f; // g is a pointer to f
    cout<<&f<<endl; // Output: Address of f
    cout<<g<<endl; // Output: Address of f (same as above)
    cout<<*g<<endl; // Output: 10
    *g = 40; // Modifying the value at the address pointed to by g will modify f
    cout<<f<<endl; // Output: 40
    
    

    return 0;
}