#include <iostream>
#include <bits/stdc++.h>
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
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    Node* head = NULL;
    Node* tail = NULL;

    // Create Linked List
    for(int i = 0; i < 8; i++) {
        Node* newNode = new Node(arr[i]);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display Original List
    cout << "Original List: ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // code for rotate by k places 

    int length = 0;
     temp = head;

while(temp != NULL) {
    length++;
    temp = temp->next;
}
int k = 2;
k = k % length;

for(int i = 0; i < k; i++) {

    Node* first = head;
    Node* second = NULL;

    while(first->next != NULL) {
        second = first;
        first = first->next;
    }

    first->next = head;
    second->next = NULL;

    head = first;
    tail = second;
}
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }









    return 0;
}