#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

void display(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<'\n';
}

Node *insertBegin(Node *head,int x){
	Node *temp = new Node(x);
	temp->next = head;
	return temp;
}

Node *insertEnd(Node *head,int x){
	Node *temp = new Node(x);
	if(head == NULL)
		return temp;
	Node *curr = head;
	while(curr->next != NULL)
		curr = curr->next;
	curr->next = temp;
	return head;
}

Node *delHead(Node *head){
	if(head == NULL)
		return NULL;
	
	Node *temp = head->next;
	delete head;
	return temp;
}

Node *delLast(Node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	Node *curr = head;
	while(curr->next->next != NULL)
		curr = curr->next;
	delete (curr->next);
	curr->next = NULL;
	return head;
}

Node *insertPos(Node *head,int x,int pos){
	Node *temp = new Node(x);
	if(pos == 1){
		temp->next = head;
		return temp;
	}
	Node *curr = head;
	for(int i=1; i<=(pos-2) && curr != NULL; i++)
		curr = curr->next;
	if(curr == NULL)
		return head;
	temp->next = curr->next;
	curr->next = temp;
	return head;
}

int search(Node *head,int x){
	int pos = 1;
	Node *curr = head;
	while(curr != NULL){
		if(curr->data == x)
			return pos;
		else{
			pos++;
			curr = curr->next;
		}
	}
	return -1;
}
int main(){
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	display(head);
	head = insertBegin(head,35);
	display(head);
	head = insertEnd(head,5);
	display(head);
	head = delHead(head);
	display(head);
	head = delLast(head);
	display(head);
	head = insertPos(head,6,2);
	display(head);
	int pos = search(head,20);
	cout<<pos<<"\n";
}