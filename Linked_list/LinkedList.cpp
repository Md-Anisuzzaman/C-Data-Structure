#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    
    LinkedList()
    {
        head = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);

        // if (head == NULL)
        // {
        //     head = a;
        //     return;
        // }
        a->next = head;
        head = a;
    }

    void Traverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }

    // int SearchDistinctValue(int value)
    // {
    //     node *a = head;
    //     int index = 0;
    //     while (a != NULL)
    //     {
    //         if (a->data == value)
    //         {
    //             return index;
    //         }
    //         a = a->next;
    //         index++;
    //     }
    //     return -1;
    // }

    // int SearchAlltValue(int value)
    // {
    //     node *a = head;
    //     int index = 0;
    //     while (a != NULL)
    //     {
    //         if (a->data == value)
    //         {
    //             cout << value << " is found at index " << index << "\n";
    //         }
    //         a = a->next;
    //         index++;
    //     }
    //     return -1;
    // }
};

int main()
{
    LinkedList l;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        l.InsertAtHead(n);
    }
      
    // l.InsertAtHead(50);
    // l.InsertAtHead(60);
    // l.InsertAtHead(80);
    l.Traverse();
    // cout << "distinc value " << l.SearchDistinctValue(20) << "\n";
    // cout << "search All value "<< l.SearchAlltValue(60) << "\n";

        return 0;
}