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
    n->next = head;
    head = n;
};

double getAverage(node *head)
{
    node *temp = head;
    int sum = 0;
    int count = 0;
    while (temp != NULL)
    {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    return (double)sum / (double)count;
}

void deleteList(node *head)
{
    if (head == NULL)
        return;
    deleteList(head->next);
    delete head;
};

int main()
{
    node *head = NULL;
    insertAtHead(head, 7);
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    

    cout << getAverage(head) << endl;

    deleteList(head);

    return 0;
}