/* Implement a queue using a static array that supports enqueue(), dequeue(), and front() operations.
  Make the array size 100.*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class Queue
{
public:
    int a[MAX_SIZE];
    int l, r;

    Queue()
    {
        l = 0;
        r = -1;
    }
    void enqueue(int value)
    {
        if (r + 1 >= MAX_SIZE)
        {
            cout << "Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }

    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return;
        }
        l++;
    }

    int front()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return r - l + 1;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Q size : " << q.size() << "\n";

    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();

    cout << "Q size : " << q.size() << "\n";
    return 0;
}
