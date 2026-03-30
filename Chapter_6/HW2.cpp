#include <iostream>
using namespace std;
int main (){
    int arr[5] = {1, 2, -3, 4, 5};

    int max = arr[0];
    int secondmax = 0;
    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            secondmax = max;
            max = arr[i];

        }
    }
    // waf to print all the unique elements in the array
    cout<<"Unique elements in array: ";
    cout<<"Second largest element in array: "<<secondmax<<endl;
    cout<<"Largest element in array: "<<max<<endl;
   

   

    

    return 0;
}