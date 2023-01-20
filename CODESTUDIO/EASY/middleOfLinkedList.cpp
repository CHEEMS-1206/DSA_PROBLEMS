#include <bits/stdc++.h> 
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

Node *findMiddle(Node *head) {
    if(head->next == NULL){
        return head;
    }
    if(head == NULL){
        return NULL;
    }
    // getting length of node
    int count = 1;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    count = count/2;
    temp = head;
    int reach = 0;
    while(reach < count){
        temp = temp->next;
        reach++;
    }
    return temp;
}