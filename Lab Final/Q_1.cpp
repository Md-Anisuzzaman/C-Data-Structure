//Write a program to sort an array of strings in lexicographic order using the merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<string> b;
    vector<string> c;
    for (int i = 0; i < mid; i++)
        b.push_back(arr[i]);

    for (int i = mid; i < arr.size(); i++)
        c.push_back(arr[i]);

    vector<string> sorted_b = merge_sort(b);
    vector<string> sorted_c = merge_sort(c);

    vector<string> sorted_a;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    int n;
    cin >> n;
    string s;
    vector<string> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        arr.push_back(s);
    }
    vector<string> ans = merge_sort(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
