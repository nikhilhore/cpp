#include <bits/stdc++.h>
using namespace std;

// There are two ways of creating Node. One is object and another is structure.
class Node{
public:
	int data;
	Node* next;
};

// OR we can use below structure also for creating Node for Linkedlist.

// struct Node{
// 	int data;
// 	Node* next;
// }

// Here, we have to create a global head Node and request for space in the memory.
Node* head= new Node();

void PrintList(){
	Node* temp= head;
	while(temp!=NULL){
		cout << temp->data << ' ';
		temp= temp->next;
	}
	cout << endl;
}

void Push(int x){
	Node* temp= new Node();
	temp->data= x;
	temp->next= head;
	head= temp;
}

void Append(int x){
	Node* temp= new Node();
	temp->data= x;
	temp->next= NULL;
	Node* last= head;
	while(last->next!=NULL){
		last= last->next;
	}
	last->next= temp;
}

void InsertValueAtIndex(int indx, int x){
	Node* temp= new Node();
	temp->data= x;
	if(indx==0){
		temp->next= head;
		head= temp;
	}
	else {
		int cnt=0;
		Node* prev= head;
		while(cnt!=indx-1){
			prev= prev->next;
			cnt++;
		}
		temp->next= prev->next;
		prev->next= temp;
	}
}

void DeleteNodeAtIndex(int indx){
	if (indx==0){
		Node* temp= head;
		head= temp->next;
		free(temp);
	}
	else {
		int cnt=0;
		Node* prev= head;
		Node* temp= head->next;
		while(cnt!=indx-1){
			prev= prev->next;
			temp= temp->next;
			cnt++;
		}
		prev->next= temp->next;
		free(temp);
	}
}

void Reverse(Node* *head){
	Node* current= *head;
	Node* prev= new Node();
	Node* later= new Node();
	prev= NULL;
	later= NULL;
	while(current!=NULL){
		later= current->next;
		current->next= prev;
		prev= current;
		current= later;
	}
	*head= prev;
}

int main(){
	int n, x;
	cin >> n;
	// Remember, if we don't assign data value for head it will be '0' by default.
	// And our linkedlist will have an extra element '0' in the front.
	cin >> x;
	head->data= x;
	// As we have already taken and element from user we need to run loop for n-2 times.
	for (int i=1; i<n; ++i){
		cin >> x;
		Append(x);
	}
	PrintList();

	Push(0);
	PrintList();

	InsertValueAtIndex(6, 58);
	PrintList();

	DeleteNodeAtIndex(3);
	PrintList();

	Reverse(&head);
	PrintList();
	
	return 0;
}