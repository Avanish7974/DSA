#include <iostream>
using namespace std;
class PublicClass {
public:
    void display() {
        cout << "This is a public class." << endl;
    }
};

class PrivateClass {
private:
    string name;
public:
    void Name(string n) {
        name = n;
        cout << "Name set to: " << name << endl;
    }
   

};

int main() {
    PublicClass obj;
    obj.display();

    PrivateClass obj2;
    obj2.Name("Avanish Singh");

    return 0;
}