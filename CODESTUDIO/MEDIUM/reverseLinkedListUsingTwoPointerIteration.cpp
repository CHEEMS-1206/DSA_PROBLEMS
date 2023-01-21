#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
*****************************************************************/

// we are given head and we have to return a pointer to the ll such that the ll is reversed of current ll.
Node* reverseLinkedList(Node *head)
{
    // if ll has only 1 element or the ll is empty than return current head 
    // no need to reverse the ll
    if(head == NULL || head->next == NULL){
        return head;
    }
    // if ll has more than 1 nodes
    
    // take 3 pointers prev,curr,forward
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    // till curr is not at the last node 
    while(curr != NULL){
        // move forward ahead to keep track of the rest of the ll
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}