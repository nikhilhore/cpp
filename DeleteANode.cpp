SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position)
{
    if (llist == NULL)
        return llist;

    SinglyLinkedListNode* new_node = llist;
 
    if (position == 0)
    {
         
        llist = new_node->next;
         
        free(new_node);            
        return llist;
    }
 
    for(int i = 0; new_node != NULL && i < position - 1; i++)
        new_node = new_node->next;
 
    if (new_node == NULL || new_node->next == NULL)
        return llist;
 
    SinglyLinkedListNode *next = new_node->next->next;
 
    free(new_node->next);
     
    new_node->next = next;
    return llist;
}