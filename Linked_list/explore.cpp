#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    };
};

void insertAtHead(Node *&head, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
};

void display(Node *head)
{
    if (head == NULL)
    {

        return;
    }

    while (head!= NULL)
    {

        cout << head->value << " ";

        head = head->next;
    };
};

int main()
{

    // Node *a = new Node(10);
    // Node *b = new Node(20);
    // Node *c = new Node(30);

    // a->next = b;
    // b->next = c;
    Node *head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    display(head);
    // cout << head->value <<" "<< head->next->value;
    // cout<<a->value<<" "<< a->next->value;
    // cout<<a->next->next->value;

    return 0;
};
