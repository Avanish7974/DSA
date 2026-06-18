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
    int arr[5] = {1,2,3,4,5};

    ListNode* head = NULL;
    ListNode* tail = NULL;

    // Create Linked List
    for(int i = 0; i < 5; i++) {
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

   temp = head;
   int sum = 0;
   int n = 2;
   while(temp != NULL) {
        cout << temp->val << " ";
        sum += 1;
        temp = temp->next;
    }
    sum = sum - n;
    cout<<"Sum Is : "<<sum<<endl;

    ListNode* prev = NULL;
    temp = head;
    while(sum--){
        prev = temp;
        temp = temp->next;
    }
 
    prev->next = temp->next;
    // delete temp;
    temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }


    








    return 0;
}