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
    int arr[9] = {10, 20, 30, 40, 50, 60, 70, 80,90};

    Node* head = NULL;
    Node* tail = NULL;

    // Create Linked List
    for(int i = 0; i < 9; i++) {
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

    // Delete Head
    Node* delHead = head;
    head = head->next;
    delete delHead;

    cout << "After Head Deletion: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    delete curr;
    prev->next = NULL;
    tail = prev;

    cout << "After Tail Deletion: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Insert at Position
    int insertPos = 3;
    Node* newNode = new Node(100);

    if(insertPos == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        temp = head;
        int count = insertPos - 2;

        while(count--) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "After Insertion at Position " << insertPos << ": ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete at Position
    int deletePos = 3;

    if(deletePos == 1) {
        Node* del = head;
        head = head->next;
        delete del;
    }
    else {
        Node* prevNode = NULL;
        Node* currNode = head;

        int count = deletePos - 1;

        while(count--) {
            prevNode = currNode;
            currNode = currNode->next;
        }

        prevNode->next = currNode->next;
        delete currNode;
    }

    cout << "After Deletion at Position " << deletePos << ": ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Final Head = " << head->data << endl;
    cout << "Final Tail = " << tail->data << endl;


    Node* temp1 = head;
    int count = 0;
    while(temp1 != NULL) {
        cout << temp1->data << " ";
        count++;
        temp1 = temp1->next;
    }
    
    count = count/2;
    cout<<count<<endl;
    temp1 = head;
    while(count--) {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout<<"middle one is : "<<temp1->data;
    return 0;
}