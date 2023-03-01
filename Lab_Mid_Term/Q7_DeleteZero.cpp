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

void deleteZero(node *&head)
{
    node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            node *next = curr->next;

            if (curr->prev != NULL)
            {
                curr->prev->next = next;
            }

            if (next != NULL)
            {
                next->prev = curr->prev;
            }

            if (curr == head)
            {
                head = next;
            }

            delete curr;
            curr = next;
        }
        else
        {
            curr = curr->next;
        }
    }
}

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

    InserAtHead(head, 5);
    InserAtHead(head, 0);
    InserAtHead(head, 0);
    InserAtHead(head, 2);
    InserAtHead(head, 0);

    traverse(head);
    deleteZero(head);

    traverse(head);
    return 0;
};