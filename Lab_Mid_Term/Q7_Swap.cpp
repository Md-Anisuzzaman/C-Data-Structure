#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void InserAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void swap(node *&head, int i, int j)
{
    // If both positions are same
    if (i == j)
        return;

    // Find i-th and j-th nodes in the list
    node *prev_i = NULL;
    node *curr_i = head;
    node *prev_j = NULL;
    node *curr_j = head;
    for (int k = 0; k < i; k++)
    {
        prev_i = curr_i;
        curr_i = curr_i->next;
    }

    for (int k = 0; k < j; k++)
    {
        prev_j = curr_j;
        curr_j = curr_j->next;
    }

    // If i-th node is not the head node
    if (prev_i != NULL)
        prev_i->next = curr_j;
    else
        head = curr_j;

    // If j-th node is not the head node
    if (prev_j != NULL)
        prev_j->next = curr_i;
    else
        head = curr_i;

    // Swap next and prev pointers of i-th and j-th nodes
    node *temp = curr_i->prev;
    curr_i->prev = curr_j->prev;
    curr_j->prev = temp;

    temp = curr_i->next;
    curr_i->next = curr_j->next;
    curr_j->next = temp;
};

void traverse(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    node *head = NULL;
    InserAtHead(head, 7);
    InserAtHead(head, 4);
    InserAtHead(head, 6);
    InserAtHead(head, 2);
    InserAtHead(head, 3);
    traverse(head);
    int i = 1, j = 4;
    swap(head, i, j);
    traverse(head);
    return 0;
}