#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {50, 20, 10, 40, 50};

    // First linked list
    ListNode* List1 = nullptr;
    ListNode* tail1 = nullptr;

    for (int i = 0; i < 6; i++) {

        if (List1 == nullptr) {
            List1 = new ListNode(arr1[i]);
            tail1 = List1;
        }
        else {
            ListNode* newNode = new ListNode(arr1[i]);

            tail1->next = newNode;
            newNode->prev = tail1;
            tail1 = newNode;
        }
    }

    // Second linked list
    ListNode* List2 = nullptr;
    ListNode* tail2 = nullptr;

    for (int i = 0; i < 5; i++) {

        if (List2 == nullptr) {
            List2 = new ListNode(arr2[i]);
            tail2 = List2;
        }
        else {
            ListNode* newNode = new ListNode(arr2[i]);

            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = newNode;
        }
    }
    vector<int>list;

    // Print first list
    // cout << "List 1: ";
    ListNode* temp = List1;

    while (temp != nullptr) {
        // cout << temp->data << " ";
        list.push_back(temp->data);
        temp = temp->next;
    }

    // cout << endl;

    // Print second list
    // cout << "List 2: ";
    temp = List2;

    while (temp != nullptr) {
        // cout << temp->data << " ";
        list.push_back(temp->data);
        temp = temp->next;
    }

    // cout << endl;

   sort(list.begin(), list.end());

//    for (auto x : list) {
//     cout << x << " ";
//    }

//    cout<<endl;
   // Second linked list
    ListNode* List3 = nullptr;
    ListNode* tail3 = nullptr;

    for (int i = 0; i < list.size(); i++) {

        if (List3 == nullptr) {
            List3 = new ListNode(list[i]);
            tail3 = List3;
        }
        else {
            ListNode* newNode = new ListNode(list[i]);

            tail3->next = newNode;
            newNode->prev = tail3;
            tail3 = newNode;
        }
    }

    cout << "List 3: ";
    temp = List3;

    while (temp != nullptr) {
        cout << temp->data << " ";
        // list.push_back(temp->data);
        temp = temp->next;
    }



    return 0;
}