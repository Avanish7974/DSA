#include <iostream>
#include <vector>
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

ListNode* createList(int arr[], int n) {

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; i++) {

        ListNode* newNode = new ListNode(arr[i]);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    ListNode* l1 = createList(arr1, n1);
    ListNode* l2 = createList(arr2, n2);

    cout << "List 1: ";
    printList(l1);

    cout << "List 2: ";
    printList(l2);

cout<<"\nMy logic : ";
int num1 = 0;
int n = 1;
    ListNode* hea = l1;
     while (hea != nullptr) {
        num1 = hea->val*n+num1;
        hea = hea->next;
        n=n*10;
    }
    int num2 = 0;
    n = 1;
    hea = l2;
     while (hea != nullptr) {
        num2 = hea->val*n+num2;
        hea = hea->next;
        n=n*10;
    }
    
    int sum = num1 + num2;

    vector<int>nums;
    while(sum>0){
        int rem = sum %10;
        nums.push_back(rem);
        sum = sum/10;
    }

    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for(int i = 0;i<nums.size();i++){
        if(head == nullptr){
            ListNode* ele = new ListNode(nums[i]);
            head = ele;
            tail = head;
        }
        else{
            ListNode* elem = new ListNode(nums[i]);
            tail->next = elem;
            tail = elem;
        }
    }
    return 0;
}