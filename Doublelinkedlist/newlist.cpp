#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    int arr[6] = {1,2,3,4,5,6};
    node* head = NULL;
    node* tail = NULL;
    for(int i =0;i<6;i++){
        if(head == NULL){
            head = new node(arr[i]);
            tail = head;
        }
        else{
            node* temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    node* neww = new node(100);
    head->prev = neww;
    neww->next = head;
    head = neww;

    
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    node* temp1 = tail;

while (temp1 != nullptr) {
    cout << temp1->data << " ";
    temp1 = temp1->prev;
}


    return 0;
}