#include <iostream>
using namespace std;

class Car {
public:
    string color;      // Attribute

    void start() {     // Method
        cout << "Car Started";
    }
    void changeColor(string newColor) { // Method to change color
        color = newColor;
    }
};

int main() {
    Car car1;

    car1.color = "Black";

    cout << car1.color << endl;

    car1.start();
    car1.changeColor("Red");
    cout << endl << car1.color << endl;

    return 0;
}