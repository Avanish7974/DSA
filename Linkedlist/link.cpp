#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* first = new Node(10);
    Node* second = new Node(2);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;
    Node* newnode = new Node(20);
    newnode->next = head;
    head = newnode;
    first->next = second;
    second->next = third;
    Node* temp = head;

while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
}

cout << endl;
cout << head->data << endl;   // Still valid


  

    return 0;
}