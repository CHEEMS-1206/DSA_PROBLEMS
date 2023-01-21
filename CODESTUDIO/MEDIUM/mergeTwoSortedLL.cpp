Node<int>* sortTwoLists(Node<int>* l1, Node<int>* l2)
{
    // Write your code here.
    if(l1==NULL)
        return l2;
   	else if(l2==NULL)
        return l1;
    Node<int>*t=NULL;
    if(l1->data<=l2->data){
        t=l1;
        l1=l1->next;
    }
    else{
        t=l2;
        l2=l2->next;
    }
    Node<int>*h=t;
    while(l1!=NULL && l2!=NULL){
        Node<int>*temp=NULL;
        if(l1->data<=l2->data){
            temp=l1;
            l1=l1->next;
        }
        else{
            temp=l2;
            l2=l2->next;
        }
        t->next=temp;
        t=temp;
    }
    if(l1!=NULL)
        t->next=l1;
    else
        t->next=l2;
    return h;
}