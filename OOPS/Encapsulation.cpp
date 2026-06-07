#include <iostream>
using namespace std;

class Encapsulation {
private:
    int data; // Private data member
public:
    void setData(int value) { // Public method to set data
        data = value;
    }
    int getData() { // Public method to get data
        return data;
    }

};

int main() {
    Encapsulation obj;
    obj.setData(10);
    cout << "Data: " << obj.getData() << endl;
    return 0;
}