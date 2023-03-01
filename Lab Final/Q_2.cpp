// Implement a Doubly Linked-dl of integers that maintains a head and a tail. Implement the following functions in your Doubly Linked-dl.

// insertHead(value) : Inserts the value at the beginning of the linked-dl. Expected Complexity O(1).
// insertTail(value) : Inserts the value at the end of the linked-dl. Expected Complexity O(1).
// insertMid(value) : Inserts the value at the middle of the linked-dl. Expected Complexity O(n).

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

class LinkeList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkeList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertHead(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
        size++;
    }

    void insertTail(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = NULL;
        if (tail != NULL)
        {
            tail->next = newNode;
        }
        else
        {
            head = newNode;
        }
        tail = newNode;
        size++;
    }

    void insertMid(int value)
    {
        if (size == 0)
        {
            insertHead(value);
        }
        else
        {
            int mid = size / 2;
            Node *current = head;
            for (int i = 0; i < mid; i++)
            {
                current = current->next;
            }
            Node *newNode = new Node;
            newNode->data = value;
            newNode->prev = current->prev;
            newNode->next = current;
            current->prev->next = newNode;
            current->prev = newNode;
            size++;
        }
    }

    void print()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkeList a;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);

    a.print();

    return 0;
}
