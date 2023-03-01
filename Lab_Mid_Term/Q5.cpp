/* Write a recursive function to find the maximum element in an array */

#include <bits/stdc++.h>
using namespace std;
int max_elem(vector<int> arr, int n)
{
    if (n == 1)
    {
        return arr[n - 1];
    }

    int max = max_elem(arr, n - 1);

    if (max > arr[n - 1])
        return max_elem(arr, n - 1);
    else
        return arr[n - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << max_elem(arr, n);

    return 0;
}