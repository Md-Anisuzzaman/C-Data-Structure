#include <bits/stdc++.h>
using namespace std;
const MAX_SIZE = 500;

class Stack
{
    Public :

    int arr[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }
};

void push(int val)
{
    if (stack_size + 1 > MAX_SIZE)
    {
        cout << "Stack Overflow" << endl;
        return;

        stack_size = MAX_SIZE + 1;
        arr[stack_size - 1] = val;
    }
};

int main()
{
   
    cout << push(3);

    return 0;
};