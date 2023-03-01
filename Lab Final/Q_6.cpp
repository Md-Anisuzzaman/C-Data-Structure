/*You are given a ladder array of n integers. You need to sort it using a Deque.
You can use builtin Deque for this problem. Expected Time Complexity is O(n).

A ladder array is an array that is increasing at first, then decreasing after that.
For example: [1,3,5,7,2,0] is a ladder array because 1 < 3 < 5 < 7 > 2 > 0.
It is increasing till value 7, then it is decreasing after that.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<int> dq;

    dq.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= dq.front())
        {
            dq.push_front(a[i]);
        }
        else
        {
            dq.push_back(a[i]);
        }
    }

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
}
