#include <iostream>
#include <vector>
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

bool check(vector<ListNode*>& visited, ListNode* curr)
{
    for (int i = 0; i < visited.size(); i++) {
        if (visited[i] == curr) {
            return true;
        }
    }
    return false;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    // Create Linked List
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

    // Create Cycle
    tail->next = head->next;   // 8 -> 2

    // Detect Cycle using Visited Vector
    ListNode* curr = head;
    // vector<ListNode*> visited;
    unordered_map<ListNode*,bool>visited;

    bool cycleFound = false;

    while (curr != NULL) {

        if (visited[curr]==1) {
            cycleFound = true;
            head = curr;
            break;
        }
        visited[curr]=1;
        curr = curr->next;
    }

    if (cycleFound)
        cout << "Cycle Detected at : "<<head->val << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}