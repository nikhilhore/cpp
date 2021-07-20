// LinkedList primary operations.

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

// int size=0;

void printList(Node* n){
    while(n!=NULL){
        cout << n->data << ' ';
        n= n->next;
    }
}

Node* getNode(int data)
{
    Node* new_node = NULL;
    new_node= new Node();

    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(Node* *head_ref, int new_data){
    // struct Node* new_node= (struct Node * ) malloc(sizeof(struct Node));
    Node* new_node= NULL;
    new_node= new Node();

    new_node->data= new_data;
    new_node->next= *head_ref;
    *head_ref= new_node;
}

void append(Node* *head_ref, int new_data){
    // struct Node* new_node= (struct Node * ) malloc(sizeof(struct Node));
    Node* new_node= NULL;
    new_node= new Node();

    Node* last= *head_ref;

    new_node->data= new_data;
    new_node->next= NULL;

    while(last->next!=NULL){
        last= last->next;
    }
    last->next= new_node;
}

void insertAfter(Node* prev_node, int new_data){
    Node* new_node= NULL;
    new_node= new Node();

    new_node->data= new_data;
    new_node->next= prev_node->next;
    prev_node->next= new_node;
}

void insertPosition(Node* *head_ref, int pos, int new_data)
{
    pos+=1;
    while (pos--) {
        if (pos == 0) {
 
                // adding Node at required pos
            Node* new_node = NULL;
            new_node= new Node();
 
                // Making the new Node to point to
                // the old Node at the same pos
            new_node->data= new_data;
            new_node->next= *head_ref;
 
                // Changing the pointer of the Node previous
                // to the old Node to point to the new Node
            *head_ref = new_node;
        }
        else
              // Assign double pointer variable to point to the
              // pointer pointing to the address of next Node
            head_ref = &(*head_ref)->next;
    }
    // size++;
}

void deleteNode(Node* *head_ref, int pos)
{
    // If linked list is empty
    if (*head_ref == NULL)
        return;
     
    // Store head node
    Node* new_node = *head_ref;
 
    // If head needs to be removed
    if (pos == 0)
    {
         
        // Change head
        *head_ref = new_node->next;
         
        // Free old head
        free(new_node);            
        return;
    }
 
    // Find previous node of the node to be deleted
    for(int i = 0; new_node != NULL && i < pos - 1; i++)
        new_node = new_node->next;
 
    // If pos is more than number of nodes
    if (new_node == NULL || new_node->next == NULL)
        return;
 
    // Node new_node->next is the node to be deleted
    // Store pointer to the next of node to be deleted
     Node *next = new_node->next->next;
 
    // Unlink the node from linked list
    free(new_node->next); // Free memory
     
    // Unlink the deleted node from list
    new_node->next = next;
}

int main(void){
    int n, new_data;
    cin >> n;

    Node*head= NULL;
    head= new Node();

    cin >> head->data;
    head->next= NULL;

    head->next= getNode(58);

    while(--n){
        cin >> new_data;
        append(&head, new_data);
    }

    push(&head, 23);
    insertAfter(head->next->next->next->next, 42);
    append(&head, 67);
    deleteNode(&head, 10);
    insertPosition(&head, 12, 26);

    printList(head);
    return 0;
}