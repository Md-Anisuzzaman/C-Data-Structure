#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

void print(Node *n)
{

    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->Next;
    };
}

void insertAtTheFront(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->Next = *head;
    *head = newNode;
}

int main()
{

    Node *head = new Node();
    Node *seceond = new Node();
    Node *third = new Node();

    head->value = 1;
    head->Next = seceond;
    seceond->value = 2;
    seceond->Next = third;
    third->value = 3;
    third->Next = NULL;

    insertAtTheFront(&head, -1);
    print(head);


    return 0;
}
