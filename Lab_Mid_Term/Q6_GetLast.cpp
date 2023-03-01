#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    
    n->next = head;
    head = n;
}

int getLast(node *head)
{
    if (head == NULL)
        return -1;

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}

void deleteList(node *head)
{
    if (head == NULL)
        return;
    deleteList(head->next);
    delete head;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    cout << getLast(head) << endl;
    deleteList(head);

    return 0;
}