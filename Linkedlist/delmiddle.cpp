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
    int arr[8] = {10,20,30,40,50,60,70,80};

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

    // delete middle one

    ListNode* temp1 = head;
    int count = 0;
    while(temp1 != NULL) {
        // cout << temp1->val << " ";
        count++;
        temp1 = temp1->next;
    }
    // cout<<endl;
    count = count/2;
    // cout<<count<<endl;
    temp1 = head;
    ListNode* prev = NULL;
    while(count--) {
        // cout << temp1->val << " ";
        prev = temp1;
        temp1 = temp1->next;
    }
    prev->next = temp1->next;
    // cout<<"middle is : "<<temp1->val<<endl;
    delete temp1;


    // cout<<"previous is : "<<prev->val<<endl;
    temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

    if (head == NULL || head->next == NULL) {
    return NULL;
}    
    ListNode* temp1 = head;
    int count = 0;
    while(temp1 != NULL) {
        count++;
        temp1 = temp1->next;
    }
    count = count/2;
    temp1 = head;
    ListNode* prev = NULL;
    while(count--) {
        prev = temp1;
        temp1 = temp1->next;
    }
    prev->next = temp1->next;
    delete temp1;
    return head;
        
    }
};