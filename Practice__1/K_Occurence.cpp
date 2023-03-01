#include <bits/stdc++.h>
using namespace std;

int k_ocurence(vector<int> &arr, int k)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int i, n, j, k;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cin >> k;

    sort(arr.begin(), arr.end());

    cout << "\n";

    if (k_ocurence(arr, k) > 1)
    {
        cout << "YES"
             << "";
    }
    else
    {
        cout << "No"
             << "";
    }

    return 0;
};
