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
    int arr[5] = {5,4,3,8,9};

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

    vector<int>array;

    // Display Original List
    cout << "Original List: ";
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        array.push_back(temp->val);
        temp = temp->next;
    }
    cout << endl;

    sort(array.begin(),array.end());

    // code for rotate by k places 
    int i = 0;
    temp = head;
    while(temp != NULL) {
        temp->val = array[i] ;
        cout << temp->val << " ";
        temp = temp->next;
        i++;
    }
    

    // temp = head;
    // while(temp != NULL) {
    //     cout << temp->val << " ";
    //     // array.push_back(temp->val);
    //     temp = temp->next;
    // }


   



    








    return 0;
}