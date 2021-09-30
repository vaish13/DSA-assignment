#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void traverseForward(Node *node)
{
    while(node!=NULL) {
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<"\n";
}

void traverseBackward(Node *node)
{
    while(node!=NULL) {
        cout<<node->data<<" ";
        node = node->prev;
    }
    cout<<"\n";
}

void insertionAfterMiddleNode(Node *node, int data)
{
    Node *temp=new Node(data);
    
    Node *fast=node;
    Node *slow=node;
    while(fast!= NULL && fast->next!= NULL)
    {
    	fast=fast->next->next;
    	slow=slow->next;
	}
	temp->next = slow->next;
	temp->prev = slow;
	slow->next->prev = temp;
	slow->next = temp;
	

}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    cout<<"Before Insertion: ";
    traverseForward(head);

     
    insertionAfterMiddleNode(head, 17);

    cout<<"After Insertion: ";
    traverseForward(head);   

    return 0;
}
