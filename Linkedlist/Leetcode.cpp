#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = NULL;
    }
};

int main() {
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    ListNode* head = NULL;
    ListNode* tail = NULL;

    // Create Linked List
    for(int i = 0; i < 8; i++) {
        ListNode* newNode = new ListNode(arr[i]);

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
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
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

    ListNode* first = head;
    ListNode* second = NULL;

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
        cout << temp->val << " ";
        temp = temp->next;
    }









    return 0;
}