#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> vec = {1, 2, 3, 4, 5,6,9};
    cout<<"Vector elements: ";
    cout<<vec[3]<<endl;

    // vector functions
    cout<<"Size of vec: "<<vec.size()<<endl;
    vec.push_back(6);
    vec.push_back(7);
    cout<<"Size of vec after push_back: "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size of vec after pop_back: "<<vec.size()<<endl;
    cout<<"First element of vec: "<<vec.front()<<endl;
    cout<<"Last element of vec: "<<vec.back()<<endl;
    cout<<"Element at index 2: "<<vec.at(2)<<endl;
    vec.front() = 10; // Modifying the first element
    cout<<"First element of vec after modification: "<<vec.front()<<endl;
    cout<<"capacity of vec: "<<vec.capacity()<<endl;

    vector<int> vec2(5, 0); // Vector of size 5 initialized with 0
    cout<<"Vector 2 elements: ";    
    for(int i:vec2) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of vec2: "<<vec2.size()<<endl;
    cout<<"Capacity of vec2: "<<vec2.capacity()<<endl;
    vec2.push_back(1);
    vec2.push_back(2);
    cout<<"Size of vec2 after push_back: "<<vec2.size()<<endl;
    cout<<"Capacity of vec2 after push_back: "<<vec2.capacity()<<endl;
    // this means vector automatically resizes itself when the capacity is exceeded, which is a key feature of vectors in C++.




    return 0;
}