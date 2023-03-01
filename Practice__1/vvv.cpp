#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

int func(int a, int b)
{

    return func(a - 1, a + b);
}
int main()
{
   cout<<func(2,5);

    return 0;
}