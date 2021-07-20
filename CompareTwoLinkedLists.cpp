int compare_lists(SinglyLinkedListNode *llist1,
                  SinglyLinkedListNode *llist2)
{
    while (llist1 != NULL && llist2 != NULL)
    {
        if (llist1->data != llist2->data)
            return 0;
 
        /* If we reach here, then llist1 and llist2 are
        not NULL and their data is same, so
        move to next nodes in both lists */
        llist1 = llist1->next;
        llist2 = llist2->next;
    }
 
    // If linked lists are identical, then
    // 'llist1' and 'llist2' must be NULL at this point.
    if (llist1 == NULL && llist2 == NULL) return 1;
    return 0;
}