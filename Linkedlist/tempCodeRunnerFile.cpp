        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "After Insertion at Position " << insertPos << ": ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete at Position
    int deletePos = 3;

    if(deletePos == 1) {
        Node* del = head;
        head = head->next;
        delete del;
    }
    else {
        Node* prevNode = NULL;
        Node* currNode = head;

        int count = deletePos - 1;

        while(count--) {
            prevNode = currNode;
            currNode = currNode->next;
        }

        prevNode->next = currNode->next;
        delete currNode;
    }

    cout << "After Deletion at Position " << deletePos << ": ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Final Head = " << head->data << endl;
    cout << "Final Tail = " << tail->data << endl;

   

vector<int> values;

temp = head;

while(temp != NULL) {