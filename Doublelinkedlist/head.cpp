#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    Node* head = nullptr;
    Node* tail = nullptr;

    // Create doubly linked list from array
    for (int i = 0; i < 6; i++) {

        if (head == nullptr) {
            head = new Node(arr[i]);
            tail = head;
        }
        else {
            Node* newNode = new Node(arr[i]);

            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }


    Node* temp = head;
    head = head->next;
    delete temp;



    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

    // Backward traversal
    cout << "Backward: ";

    current = tail;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }

    cout << endl;

    
    

    return 0;
}