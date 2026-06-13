#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};

int main() {
    Dog d;
    d.sound(); // Output: Bark

    Animal *a = &d;
    a->sound(); // Output: Bark

    return 0;
}