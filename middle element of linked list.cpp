#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

void findMiddle(Node *node)
{
    Node *temp = node;
    
    int count=0;
    while(node!=NULL)
    {
        count++;
       
        node = node->next;
    }
    int mid=count/2;

    while(mid--)
    {
        temp=temp->next;
    }
    cout<<"Middle Element: "<<temp->data<<endl;
}
int main()
{
    Node *head = new Node();
    head->data = 67;

    Node *first = new Node();
    first->data = 80;
    
    Node *second = new Node();
    second ->data = 30;

    Node *last = new Node();
    last->data = 70;


    head->next = first;
    first->next = second;
    second->next =  last;


    findMiddle(head);

    return 0;
}

