
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
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

    void Merge(LinkedList a)
    {
        if (a.size == 0)
        {
            return;
        }
        if (size == 0)
        {
            head = a.head;
            tail = a.tail;
            size = a.size;
            return;
        }
        tail->next = a.head;
        a.head->prev = tail;
        tail = a.tail;
        size += a.size;
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
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);

    a.print();

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);

    b.print();

    a.Merge(b);
    a.print();
    b.print();

    return 0;
}
