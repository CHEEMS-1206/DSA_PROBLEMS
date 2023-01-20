#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(head == NULL || K==0)
        return head;
    LinkedListNode<int> *forLength = head;
    int len = 0;
    while(forLength != NULL){
        len++;
        forLength = forLength->next;
    }
    if(K == len) return head -> next;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = head;
    int j = (len-K);
    while( j != 0){
        prev = curr;
        curr = curr->next;
        j--;
    }
    prev->next = curr->next;
    curr->next = NULL;
    return head;
}