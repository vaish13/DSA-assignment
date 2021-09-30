#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node *prev;
	Node(int data)
	{
		this->data=data;
		prev=NULL;
		next=NULL;
	}
};
void traverseForward(Node *node)
{
	while(node!=NULL){
		cout<<node->data<<"   ";
		node=node->next;
	}
	cout<<"\n";
}
void traverseBackward(Node *node)
{
	while(node!=NULL){
		cout<<node->data<<"   ";
		node=node->prev;
	}
	cout<<"\n";
}

int main()
{
	Node *head = new Node(10);
	Node *a = new Node(20);
	Node *b = new Node(30);
	
	head->next=a;
	a->next=b;
	a->prev=head;
	b->prev=a;
	
	
	
	cout<<"TraverseForward:";
	traverseForward(head);
	
	
	cout<<"TraverseBackward:";
	traverseBackward(b);
	
	return 0;
	
}
