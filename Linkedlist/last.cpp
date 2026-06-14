#include <iostream>
#include <algorithm>
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
    int arr[5] = {10,20,30,40,50};
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < 5; i++) {
        if(head == NULL) {
            Node* first = new Node(arr[i]);
            head = first;
            tail = first;
        }
        else {
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            tail = temp; 
        }
    }
    Node* tem = head;
    while(tem != NULL) {
        cout << tem->data << " ";
        tem = tem->next;
    }
    cout<<endl;

    cout<<tail->data<<endl;
    cout<<tail->next<<endl;
    cout<<head->data<<endl;
    cout<<head->next->data;

    return 0;
}