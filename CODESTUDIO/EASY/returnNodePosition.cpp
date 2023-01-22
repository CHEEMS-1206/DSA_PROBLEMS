int findNode(Node *head, int n){
    int count = 0;
    if(head == NULL)
        return -1;
    if(head->next == NULL && head->data == n)
        return count;
    if((head->next == NULL && head->data != n))
        return -1;
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->data == n)
            return count;
        count++;
        temp = temp->next;
    }
    return -1;
}