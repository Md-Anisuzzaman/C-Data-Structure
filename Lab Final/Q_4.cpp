// Write a program to check if a given bracket sequence is valid or not.
// The sequence will contain 3 types of brackets -> First Bracket ( ) ,
// Second Bracket { } and Third Bracket [ ].
// You can use builtin Stack for this problem.

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    stack<char> ST;

    for (char ch : str)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            ST.push(ch);
        }
        else
        {
            if (ST.empty())
            {
                return false;
            }

            char top = ST.top();
            ST.pop();

            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return ST.empty();
}

int main()
{
    string str;
    cin >> str;

    if (isValid(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
