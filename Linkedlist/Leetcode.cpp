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


int main() {

    int arr[] = {1,8,9};
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

    
// preint list 
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


    // ListNode* second = head;
    // ListNode* first = NULL;
    cout<<endl;

    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* futu = NULL;

    while (curr)
    {
        futu = curr->next;
        curr->next = prev;
        prev = curr;
        curr = futu;   
    }
    head = prev;


    temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


    cout<<endl;

    int carry = 0;
    temp = head;
    while(temp){
        int num = temp->val*2 + carry;
        int value = num%10;
        temp->val = value;
        carry = num/10;
        temp = temp->next;
    }
    if(carry){
    ListNode* newNode = new ListNode(carry);
    tail->next = newNode;
    }

     temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


    curr = head;
    prev = NULL;
    futu = NULL;

    while (curr)
    {
        futu = curr->next;
        curr->next = prev;
        prev = curr;
        curr = futu;   
    }
    head = prev;
cout<<endl;
     temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }



    
    




    

   

    return 0;
}