#include <iostream>
using namespace std;

class Destructor {
public:
    Destructor() {
        cout << "Constructor called." << endl;
    }
    ~Destructor() {
        cout << "Destructor called." << endl;
    }

};

class Student {
public:
    int *age;

    Student() {
        age = new int(20);
    }

    ~Student() {
        delete age;
        cout << "Destructor of Student class called." << endl;
    }
    

};
int main() {
    Student s1;
    Student s2;
    Destructor obj;
    Destructor obj2;
    

    return 0;
}