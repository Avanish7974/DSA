#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

int main() {

    int arr[] = {1,2,3,3,3,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    // Create linked list
    for (int i = 0; i < n; i++) {

        ListNode* newNode = new ListNode(arr[i]);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print linked list
    ListNode* temp = head;
    cout<<"List Is : ";
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
    // Start Question 

   vector<int> nums;

for (int i = 0; i < lists.size(); i++) {

    ListNode* temp = lists[i];

    while (temp != nullptr) {
        nums.push_back(temp->val);
        temp = temp->next;
    }
}
  
    return 0;
}