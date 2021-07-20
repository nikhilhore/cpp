#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int new_data){
		this->data= new_data;
		this->next= nullptr;
	}
};

Node* Append(Node* head, int new_data){
	Node* newnode= new Node(new_data);
	if (head==NULL){
		newnode->next= head;
		head= newnode;
	}
	else {
		Node* temp= head->next;
		while(temp->next!=head){
			temp= temp->next;
		}
		newnode->next= head;
		temp->next= newnode;
	}
	return head;
}

int main(){
	return 0;
}