#include <iostream>
using namespace std;

class Constructor {
public:
    Constructor() {
        cout << "Default constructor called." << endl;
    }
};

class ParameterizedConstructor {
public:
    ParameterizedConstructor(int x) {
        cout << "Parameterized constructor called with value: " << x << endl;
    }
};

class CopyConstructor {
public:
    CopyConstructor() { }  // Default constructor
    CopyConstructor(const CopyConstructor& obj) {
        cout << "Copy constructor called." << endl;
    }
};


class college {
public:
// non parameterized constructor
    college(){
        cout<<"Constructor of college class called."<<endl;
    }
// parameterized constructor
    college(string department, string name, string subject, int roll_no) {
        this->department = department;
        this->name = name;
        this->subject = subject;
        this->roll_no = roll_no;
    }
    // // // copy constructor
    college(const college& objkl) {
        cout << "Copy constructor of college class called." << endl;
        this->department = objkl.department;
        // this->name = objkl.name;
        // this->subject = objkl.subject;
        this->roll_no = objkl.roll_no;
    }



    string department;
    string name;
    string subject;
    int roll_no;

};

int main() {
    Constructor obj;                  // Default Constructor
    ParameterizedConstructor obj2(5); // Parameterized Constructor
    CopyConstructor obj3;             // Normal object
    CopyConstructor obj4(obj3);       // Copy Constructor
    college obj5("CSE", "Avanish Singh", "DSA", 201); // college object
    cout << "Department: " << obj5.department << endl;
    cout << "Name: " << obj5.name << endl;
    cout << "Subject: " << obj5.subject << endl;
    cout << "Roll No: " << obj5.roll_no << endl;
    college obj6(obj5); // Copy constructor for college class that takes obj5 as an argument and creates
    //  a new object obj6 with the same values as obj5 that is user defined copy constructor
        cout << "Department: " << obj6.department << endl;
        cout << "Name: " << obj6.name << endl;
        cout << "Subject: " << obj6.subject << endl;
        cout << "Roll No: " << obj6.roll_no << endl;
    
    

    // college obj6(obj5); // Copy constructor for college class
    // cout << "Department: " << obj6.department << endl;






    return 0;
}