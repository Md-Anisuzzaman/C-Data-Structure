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
void InserAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        InserAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

// void swap(node *&head, int i, int j)
// {
//     if (i == j)
//         return;

//     auto it1 = list.begin();
//     auto prev1 = list.before_begin();
//     int idx = 0;
//     while (idx != i)
//     {
//         prev1 = it1;
//         ++it1;
//         ++idx;
//     }

//     auto it2 = list.begin();
//     auto prev2 = list.before_begin();
//     idx = 0;
//     while (idx != j)
//     {
//         prev2 = it2;
//         ++it2;
//         ++idx;
//     }

//     auto next1 = it1.next();
//     auto next2 = it2.next();

//     // Swap data
//     swap(*it1, *it2);

//     // Update next/prev pointers
//     if (next1)
//         next1.prev() = it2;
//     if (next2)
//         next2.prev() = it1;
//     if (prev1)
//         prev1.next() = it2;
//     if (prev2)
//         prev2.next() = it1;
//     swap(it1.prev(), it2.prev());
//     swap(it1.next(), it2.next());
// };

void swapnodes(node* head, int i, int j)
{
    // If both positions are same
    if (i == j)
        return;

    // Find i-th and j-th nodes in the list
    node* prev_i = NULL, *curr_i = head;
    node* prev_j = NULL, *curr_j = head;
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
    node* temp = curr_i->prev;
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
    swapnodes(head,1,4);
    traverse(head);
    return 0;
}