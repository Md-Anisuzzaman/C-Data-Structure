#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, a, b;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> a >> b;
    arr.erase(arr.begin() + a - 1, arr.begin() + b);

    for (auto x : arr)
        cout << x << " ";

    return 0;
};
