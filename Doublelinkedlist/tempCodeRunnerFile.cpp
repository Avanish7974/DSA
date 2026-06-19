 node* neww = new node(100);
    head->prev = neww;
    neww->next = head;
    head = neww;
