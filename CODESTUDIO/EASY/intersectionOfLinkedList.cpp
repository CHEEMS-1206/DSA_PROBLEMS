#include <bits/stdc++.h> 
/***************************************************************
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

// approach by finding length O(n)
int length(Node *&head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int findIntersection(Node *firstHead, Node *secondHead)
{
    int len1 = length(firstHead);
    int len2 = length(secondHead);
    int diff = 0;
    Node *ptr1, *ptr2;
    if (len1 > len2)
    {
        diff = len1 - len2;
        ptr1 = firstHead;
        ptr2 = secondHead;
    }
    else
    {
        diff = len2 - len1;
        ptr1 = secondHead;
        ptr2 = firstHead;
    }
    while (diff)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
            return -1;
        diff--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

//approach by successive checking O(n^2)
int findIntersection(Node *firstHead, Node *secondHead){
    if(firstHead == NULL || secondHead == NULL)
        return -1;
    if(firstHead->data == secondHead->data)
        return firstHead->data;
    Node* temp1 = firstHead;
    while(temp1->next != NULL){
        Node* temp2 = secondHead;
        while(temp2->next != NULL){
            if(temp1 == temp2){
                return temp1->data;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return -1;
}