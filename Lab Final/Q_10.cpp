/* Given two sets, write a program to find the union of the two sets.
 You need to use STL Set for this problem.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    set<int> st1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.insert(x);
    }

    cin >> m;

    set<int> st2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.insert(x);
    }

    set<int> uni_st;

    set_union(st1.begin(), st1.end(), st2.begin(), st2.end(), inserter(uni_st, uni_st.begin()));
    for (auto it = uni_st.begin(); it != uni_st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
