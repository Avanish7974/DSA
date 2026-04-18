#include <iostream>
using namespace std;

int main() {
    int x = 1293;
    int sum = 0;
        if(x<0){
            while(x<0){
            int rem = x %10;
            sum = sum *10 +rem;
            x= x/10;
            
        }
        cout<<"The number is: "<<sum<<endl;
        
        }
        
        else{
            while(x>0){
            int rem = x %10;
            sum = sum *10 +rem;
            x= x/10;
            
        }
        cout<<"The number is: "<<sum<<endl;
        

        }
        return sum;
        
    }
    
    