#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this ->data = data;
        next = NULL;
    }

};

void insertAtTail(Node* &head, int val)
{
    Node* n = new Node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    Node* temp = head;
    while( temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp ->next = n;

}

void insertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        cout<<temp->data<<"-> ";
        temp = temp->next;  
    }

    cout<<endl;
}

int main()
{
    Node* head = NULL;

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);

    insertAtHead(head, 0);

    display(head);

}