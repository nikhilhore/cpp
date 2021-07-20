SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB)
{
    // SinglyLinkedListNode* temp= new SinglyLinkedListNode();
    SinglyLinkedListNode* last= new SinglyLinkedListNode(headA->data);
    SinglyLinkedListNode* temp= last;
    while (true){
        if (headA==NULL){
            last->next= headB;
            // cout << headB->data << endl;
            break;
        }
        if (headB==NULL){
            last->next= headA;
            // cout << headA->data << endl;
            break;
        }
        if (headA->data <= headB->data){
            last->next= headA;
            // cout << headA->data << endl;
            headA= headA->next;
        }
        else {
            last->next= headB;
            // cout << headB->data << endl;
            headB= headB->next;
        }
        last= last->next;
    }
    return temp->next;
}