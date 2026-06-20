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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    vector<int>list;
    ListNode* temp = list1;
    while (temp != nullptr) {
        list.push_back(temp->val);
        temp = temp->next;
    }
    temp = list2;
    while (temp != nullptr) {

        list.push_back(temp->val);
        temp = temp->next;
    }
   sort(list.begin(), list.end());
    ListNode* list3 = nullptr;
    ListNode* tail3 = nullptr;

    for (int i = 0; i < list.size(); i++) {

        if (list3 == nullptr) {
            list3 = new listNode(list[i]);
            tail3 = list3;
        }
        else {
            ListNode* newNode = new listNode(list[i]);

            tail3->next = newNode;
            newNode->prev = tail3;
            tail3 = newNode;
        }
    }

    return list3;

        
    }
};