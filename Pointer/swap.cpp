#include <iostream>
using namespace std;
// void pointer(int *c,int*v){
//     int temp = *c;
//     *c = *v;
//     *v = temp;
//     cout<<c;
//     cout<<endl;
//     cout<<v;
// }
int main() {
    // int a =10;
    // int b = 20;
    // int c = 30;
    // cout<<&a;
    // cout<<endl;
    // cout<<&b;
    // cout<<endl;
    // int *p1 = &a;
    // cout<<p1;
    // cout<<endl;
    // cout<<*p1;
    // int temp = *p1;
    // cout<<endl;
    // cout<<temp;
    // cout<<"sss";
    // cout<<endl;

    // pointer(&a,&b);

    // int *p2 = &c;
    // cout<<p2;
    // cout<<endl;
    // cout<<*p2;
    int a = 10;
    int b = 20;
    int *p1 = &a;
    cout<<p1;
    cout<<endl;
    *p1 = b;
    cout<<*p1;
    cout<<endl;
    cout<<a;

   



    
    return 0;
}