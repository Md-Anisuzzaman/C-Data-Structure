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

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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

double getAverage(node *head)
{
    node *current = head;
    int sum = 0;
    int count = 0;
    while (current != NULL)
    {
        sum += current->data;
        count++;
        current = current->next;
    }
    return (double)sum / (double)count;
}

int getSize(node *head)
{
    node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

bool search(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteList(node *head)
{
    if (head == NULL)
        return;
    deleteList(head->next);
    delete head;
}

void deleteion(node *&head, int val)
{
    if (head == NULL)
        return;

    if (head->data == val)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 7);
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    display(head);
    // int sz = getSize(head);
    // cout << "The size = " << sz << endl;
    // cout << search(head, 800) << endl;

    // deleteion(head, 300);
    // deleteAtHead(head);

    // display(head);
    cout << getLast(head) << endl;

    cout << getAverage(head) << endl;
    deleteList(head);

    return 0;
}