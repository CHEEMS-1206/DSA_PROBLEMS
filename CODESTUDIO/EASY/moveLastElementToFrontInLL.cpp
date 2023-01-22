LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {
    if(head->next == NULL)
        return head;
    
    LinkedListNode<int> *temp = head;
    LinkedListNode<int> *prev = NULL;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    temp->next = head;
    head = temp;
    return head;
}