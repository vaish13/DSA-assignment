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

void deletionAtEnd(Node * &head)
{
    Node *node= head;
    while(node->next->next!=NULL)
    {
    	node=node->next;
	}
    Node *temp=node->next;
    node->next=NULL;
    free(temp);
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

    cout<<"Before deletion: ";
    traverseForward(head);

     
    deletionAtEnd(head);

    cout<<"After deletion: ";
    traverseForward(head);   

    return 0;
}
