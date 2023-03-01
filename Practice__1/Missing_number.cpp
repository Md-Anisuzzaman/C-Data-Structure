#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, missing_number, sum = 0;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    missing_number = n * (n + 1) / 2;

    missing_number = missing_number - sum;

    cout << missing_number << endl;

    return 0;
};
